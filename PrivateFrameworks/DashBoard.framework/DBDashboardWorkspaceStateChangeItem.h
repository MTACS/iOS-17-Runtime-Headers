
@interface DBDashboardWorkspaceStateChangeItem : NSObject <DBWorkspaceStateChangeItem> {
    unsigned long long  _changeType;
    unsigned long long  _presentationPreference;
}

@property (nonatomic) unsigned long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool prefersAnimation;
@property (nonatomic) unsigned long long presentationPreference;
@property (readonly) Class superclass;

- (void)_buildDescriptionWithBuilder:(id)arg1;
- (id)_init;
- (id)_newEntityFromChangeItemWithPolicyProvider:(id)arg1;
- (unsigned long long)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)prefersAnimation;
- (unsigned long long)presentationPreference;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setPresentationPreference:(unsigned long long)arg1;

@end
