
@interface MXMProbeDisplay : MXMProbe <MXMDisplayProbePlatformDelegate> {
    <MXMDisplayProbePlatform> * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)descriptors;
+ (id)mainDescriptor;
+ (id)probe;
+ (id)probeWithDescriptor:(id)arg1;

- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_didRecieveData:(id)arg1;
- (void)_stopUpdates;
- (id)init;
- (id)initWithDescriptor:(id)arg1;

@end
