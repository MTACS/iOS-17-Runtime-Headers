
@interface BWDeferredProcessorController : BWStillImageProcessorController {
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
}

+ (bool)usesCustomProcessingFlow;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (int)prepare;
- (int)process;
- (id)requestForInput:(id)arg1 delegate:(id)arg2 errOut:(int*)arg3;
- (void)reset;

@end
