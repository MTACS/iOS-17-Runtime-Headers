
@protocol UAFAssetUtilitiesDelegate <NSObject>

@optional

- (void)assistantEnabledDidChange:(bool)arg1;
- (void)assistantLanguageDidChange:(NSString *)arg1;
- (void)handleAssetStatusUpdated;
- (void)networkPathChangeSatisfied:(bool)arg1 isExpensive:(bool)arg2;
- (void)siriUODAvailabilityDidChange:(bool)arg1;
- (void)siriUODStatusDidChange;

@end
