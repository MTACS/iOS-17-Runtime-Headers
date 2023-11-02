
@protocol FxPinCreation

@required

- (Class)canvasControlClass;
- (NSArray *)createInputPinArray;
- (NSArray *)createOutputPinArray;
- (FxPin *)filterImageInputPin;
- (FxPin *)imageOutputPin;
- (void)setCanvasControlClass:(Class)arg1;
- (FxPin *)transitionImageAInputPin;
- (FxPin *)transitionImageBInputPin;
- (void)valueChangedForPin:(FxPin *)arg1;

@end
