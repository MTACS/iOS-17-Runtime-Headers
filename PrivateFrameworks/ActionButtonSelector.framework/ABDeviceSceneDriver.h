
@interface ABDeviceSceneDriver : NSObject {
    ABFloatSpringProperty * _buttonGlowInterpolator;
    ABFloatSpringProperty * _buttonPressInterpolator;
    NSNumber * _buttonReleaseTimestamp;
    CADisplayLink * _displayLink;
    NSNumber * _dragProgress;
    ABColorInterpolator * _highlightColorInterpolator;
    ABFloatSpringProperty * _highlightOpacityInterpolator;
    bool  _isButtonAnimationActive;
    bool  _isInitialZoomedOutState;
    bool  _isRingHighlightVisible;
    long long  _islandMode;
    struct ABOverlayRenderInputs { 
        struct ABCarouselInputs { 
            double pressProgress; 
            double itemOpacity; 
            bool selectedItemIgnoresOpacity; 
        } carouselInputs; 
        struct ABHighlightRingInputs { 
            UIColor *color; 
            bool isVisible; 
        } highlightRingInputs; 
        double contentViewOpacity; 
        double topShadowRatio; 
    }  _overlayRenderInputs;
    id /* block */  _renderBlock;
    NSDictionary * _sceneInterpolators;
    struct ABDeviceSceneRenderInputs { 
        struct CATransform3D { 
            double m11; 
            double m12; 
            double m13; 
            double m14; 
            double m21; 
            double m22; 
            double m23; 
            double m24; 
            double m31; 
            double m32; 
            double m33; 
            double m34; 
            double m41; 
            double m42; 
            double m43; 
            double m44; 
        } modelTransform; 
        struct ABDeviceSceneCameraAndLight { 
            double fStop; 
            double focusDistance; 
            double focalLength; 
            double apertureBladeCount; 
            double lightingIntensity; 
        } cameraAndLight; 
        struct ABDeviceSceneButtonHighlight { 
            UIColor *color; 
            double opacity; 
        } buttonHighlight; 
        double buttonPressProgress; 
        long long islandMode; 
    }  _sceneRenderInputs;
    long long  _state;
    id /* block */  _stateUpdateBlock;
    NSDictionary * _zoomedInParams;
    NSDictionary * _zoomedOutParams;
}

- (void).cxx_destruct;
- (id)_paramsForState:(long long)arg1;
- (void)_setButtonAnimationActive:(bool)arg1;
- (void)_setupInterpolators;
- (void)_updateButtonAnimation;
- (void)_updateForCurrentStateAnimated:(bool)arg1;
- (void)_updateForDisplayLink:(id)arg1;
- (void)_updateRenderInputs;
- (void)_updateWithState:(long long)arg1 dragProgress:(id)arg2;

@end
