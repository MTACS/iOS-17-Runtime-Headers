
@protocol SBSwitcherTraitsAssistantDelegate <NSObject>

@required

- (void)actuateOrientationForTraitsDelegate:(SBTraitsSceneParticipantDelegate *)arg1 withContext:(TRASettingsActuationContext *)arg2 reasons:(long long)arg3;
- (double)contentContainerAspectRatio;
- (NSArray *)currentElementsParticipants;
- (bool)isChamoisUIEnabled;
- (bool)isOnExternalDisplay;
- (SBDeviceApplicationSceneHandle *)sceneHandleForLayoutElement:(SBLayoutElement *)arg1;
- (SBDeviceApplicationSceneHandle *)sceneHandleForTraitsParticipant:(TRAParticipant *)arg1;
- (NSString *)stateCaptureTitlePreamble;
- (SBTraitsPipelineManager *)traitsPipelineManager;

@end
