
@interface SBUIMutableBannerSceneClientSettings : BNMutableSceneClientSettings <BSSettingDescriptionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *transitionDismissalPreventionReason;
@property (nonatomic, copy) NSString *wantsDefaultGesturePriorityReason;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setTransitionDismissalPreventionReason:(id)arg1;
- (void)setWantsDefaultGesturePriorityReason:(id)arg1;
- (id)transitionDismissalPreventionReason;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)wantsDefaultGesturePriorityReason;

@end
