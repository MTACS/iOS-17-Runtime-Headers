
@interface TVRTouchpadView : UIView {
    id /* block */  _configurationHandler;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    TVRButtonHaptic * _haptic;
    bool  _highlighted;
    TVRTouchProcessor * _touchProcessor;
}

@property (nonatomic, copy) id /* block */ configurationHandler;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) TVRButtonHaptic *haptic;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic) TVRTouchProcessor *touchProcessor;

- (void).cxx_destruct;
- (id)_init;
- (void)_notifyConfigurationHandler:(bool)arg1;
- (id /* block */)configurationHandler;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)haptic;
- (bool)isHighlighted;
- (void)setConfigurationHandler:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHaptic:(id)arg1;
- (void)setTouchProcessor:(id)arg1;
- (id)touchProcessor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
