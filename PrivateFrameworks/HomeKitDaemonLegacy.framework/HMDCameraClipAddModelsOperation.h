
@interface HMDCameraClipAddModelsOperation : HMDCameraClipOperation <HMBLocalZoneMirrorOutputObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSSet *modelsToAdd;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void)localZone:(id)arg1 willPerformMirrorOutputForModel:(id)arg2;
- (void)main;
- (id)modelsToAdd;
- (void)updateMirrorOutputModel:(id)arg1;

@end
