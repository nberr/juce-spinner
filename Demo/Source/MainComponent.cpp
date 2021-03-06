#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (200, 200);
    
    addAndMakeVisible(s);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
}

void MainComponent::resized()
{
    s.setBounds(40, 70, 120, 30);
}
