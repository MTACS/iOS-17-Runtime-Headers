
@protocol SBSystemActionCoachingPolicy <NSObject>

@required

- (void)noteDidBeginPreview:(id <SBSystemActionPreviewInvalidatable>)arg1 forAction:(SBSystemAction *)arg2;
- (void)noteDidEndPreview:(id <SBSystemActionPreviewInvalidatable>)arg1 forAction:(SBSystemAction *)arg2;
- (void)noteDidInvalidateExpansionOfPreview:(id <SBSystemActionPreviewInvalidatable>)arg1 forAction:(SBSystemAction *)arg2 withResult:(unsigned long long)arg3;
- (bool)wantsCoachingDismissedForAction:(SBSystemAction *)arg1;
- (bool)wantsCoachingPresentedForAction:(SBSystemAction *)arg1;

@end
