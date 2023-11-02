
@protocol BLSBacklightSceneEnvironmentUpdating <NSObject>

@required

- (void)performDesiredFidelityRequest:(BLSDesiredFidelityRequest *)arg1;
- (void)performFrameSpecifiersRequest:(BLSFrameSpecifiersRequest *)arg1;
- (void)updatedEnvironmentWithDelta:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })arg1 backlightSceneUpdate:(BLSBacklightSceneUpdate *)arg2;

@end
