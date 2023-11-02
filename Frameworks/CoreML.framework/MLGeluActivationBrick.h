
@interface MLGeluActivationBrick : NSObject <EspressoBrick> {
    unsigned long long  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;

- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (unsigned long long)size;

@end
