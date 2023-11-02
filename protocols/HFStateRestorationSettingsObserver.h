
@protocol HFStateRestorationSettingsObserver <NSObject>

@optional

- (void)stateRestorationSettings:(HFStateRestorationSettings *)arg1 selectedHomeIdentifierDidUpdateExternally:(NSUUID *)arg2;

@end
