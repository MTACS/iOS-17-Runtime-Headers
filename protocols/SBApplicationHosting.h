
@protocol SBApplicationHosting <NSObject>

@required

- (bool)canHostAnApp;
- (void)conformsToSBApplicationHosting;
- (SBDeviceApplicationSceneHandle *)hostedAppSceneHandle;
- (NSArray *)hostedAppSceneHandles;
- (bool)isHostingAnApp;

@optional

- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (void)setHostedAppReferenceSize:(struct CGSize { double x1; double x2; })arg1 withInterfaceOrientation:(long long)arg2;
- (void)setInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (TRAParticipant *)traitsParticipantForSceneHandle:(SBDeviceApplicationSceneHandle *)arg1;

@end
