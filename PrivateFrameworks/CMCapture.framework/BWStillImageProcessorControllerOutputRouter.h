
@interface BWStillImageProcessorControllerOutputRouter : NSObject {
    NSMutableArray * _bypassedProcessorTypes;
    id /* block */  _outputSampleBufferRouter;
}

@property (nonatomic, readonly) NSArray *bypassedProcessorsTypes;
@property (nonatomic, readonly) id /* block */ outputSampleBufferRouter;

- (void)addBypassedProcessorType:(unsigned long long)arg1;
- (id)bypassedProcessorsTypes;
- (void)dealloc;
- (id)initWithOutputSampleBufferRouter:(id /* block */)arg1;
- (id /* block */)outputSampleBufferRouter;

@end
