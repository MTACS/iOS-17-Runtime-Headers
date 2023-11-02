
@interface WeatherUI.MicaBackgroundAnimation : NSObject <CALayerDelegate> {
    void displayScale;
    void isActive;
    void isAnimating;
    void layer;
    void mode;
    void playbackCoordinator;
    void posterOrientation;
    void posterRotationAngle;
    void randomSpeedVariance;
    void rootMicaLayer;
    void rotationLayer;
    void scale;
    void scaleLayer;
    void stateName;
    void timeStep;
}

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)layoutSublayersOfLayer:(id)arg1;

@end
