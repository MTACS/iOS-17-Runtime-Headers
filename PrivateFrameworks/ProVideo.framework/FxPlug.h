
@interface FxPlug : NSObject <FxPinCreation, FxStreamProviding> {
    struct FxPlugPriv { id x1; id x2; id x3; id x4; } * _priv;
}

+ (id)fxPlugWithDescriptor:(id)arg1 andHost:(id)arg2;
+ (unsigned int)leastCommonMultipleOfA:(unsigned int)arg1 andB:(unsigned int)arg2;
+ (id)pinInPinList:(id)arg1 withUUID:(id)arg2;

- (Class)canvasControlClass;
- (id)createInputPinArray;
- (id)createOutputPinArray;
- (void)dealloc;
- (id)descriptor;
- (id)domainOfDefinitionForSample:(id)arg1;
- (double)durationForStream:(id)arg1;
- (id)evaluateSample:(id)arg1 withOptions:(id)arg2;
- (unsigned long long)fieldOrderForSample:(id)arg1;
- (id)filterImageInputPin;
- (double)frameDurationForStream:(id)arg1;
- (id)host;
- (id)imageOutputPin;
- (id)initWithDescriptor:(id)arg1 andHost:(id)arg2;
- (id)inputPinWithUUID:(id)arg1;
- (id)inputPins;
- (bool)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
- (bool)isSamplePredetermined:(id)arg1;
- (bool)isStreamPremultiplied:(id)arg1;
- (id)outputPinWithUUID:(id)arg1;
- (id)outputPins;
- (double)pixelAspectForStream:(id)arg1;
- (bool)renderImageOutputAtTime:(double)arg1 withOptions:(id)arg2 inFxContext:(id)arg3 inRegionOfInterest:(id)arg4;
- (id)requiredSamplesForSample:(id)arg1;
- (void)setCanvasControlClass:(Class)arg1;
- (double)startTimeForStream:(id)arg1;
- (unsigned int)timeScaleForStream:(id)arg1;
- (id)transitionImageAInputPin;
- (id)transitionImageBInputPin;
- (void)valueChangedForPin:(id)arg1;

@end
