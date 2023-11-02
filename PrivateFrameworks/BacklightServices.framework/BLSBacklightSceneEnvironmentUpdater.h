
@interface BLSBacklightSceneEnvironmentUpdater : NSObject <BLSBacklightSceneEnvironmentUpdating> {
    <BLSBacklightSceneEnvironment_Private> * _environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)arg1;
- (void)performDesiredFidelityRequest:(id)arg1;
- (void)performFrameSpecifiersRequest:(id)arg1;
- (void)updatedEnvironmentWithDelta:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })arg1 backlightSceneUpdate:(id)arg2;

@end
