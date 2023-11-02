
@interface MagnifierSupport.MagnifierCommandManager : UIResponder {
    void allKeyCommands;
    void nextResponderResolver;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) UIResponder *nextResponder;

- (void).cxx_destruct;
- (void)decreaseBrightness:(id)arg1;
- (void)decreaseContrast:(id)arg1;
- (void)decreaseZoom:(id)arg1;
- (void)increaseBrightness:(id)arg1;
- (void)increaseContrast:(id)arg1;
- (void)increaseZoom:(id)arg1;
- (id)init;
- (id)keyCommands;
- (void)nextFilter:(id)arg1;
- (id)nextResponder;
- (void)previousFilter:(id)arg1;
- (void)toggleFlashlight:(id)arg1;
- (void)toggleFocus:(id)arg1;

@end
