
@interface SBSystemActionTrackPreviewsCoachingPolicy : NSObject <SBSystemActionCoachingPolicy> {
    SBSystemActionTrackPreviewsCoachingPolicySettings * _settings;
    NSMapTable * _trackedPreviewsByAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)noteDidBeginPreview:(id)arg1 forAction:(id)arg2;
- (void)noteDidEndPreview:(id)arg1 forAction:(id)arg2;
- (void)noteDidInvalidateExpansionOfPreview:(id)arg1 forAction:(id)arg2 withResult:(unsigned long long)arg3;
- (bool)wantsCoachingDismissedForAction:(id)arg1;
- (bool)wantsCoachingPresentedForAction:(id)arg1;

@end
