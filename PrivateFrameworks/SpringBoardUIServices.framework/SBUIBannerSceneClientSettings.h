
@interface SBUIBannerSceneClientSettings : BNSceneClientSettings <BSSettingDescriptionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transitionDismissalPreventionReason;
@property (nonatomic, readonly, copy) NSString *wantsDefaultGesturePriorityReason;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)transitionDismissalPreventionReason;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)wantsDefaultGesturePriorityReason;

@end
