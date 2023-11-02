
@interface SXFullscreenCaptionDarkModePolicyException : NSObject <SXDarkModePolicyException>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)shouldApplyAutoDarkModeForComponentClassification:(id)arg1;
- (long long)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2;
- (long long)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2;

@end
