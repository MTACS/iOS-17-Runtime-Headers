
@interface DBDashboardWorkspaceStateSiriChangeItem : DBDashboardWorkspaceStateChangeItem {
    bool  _floating;
}

@property (getter=isFloating, nonatomic) bool floating;

- (id)_newEntityFromChangeItemWithPolicyProvider:(id)arg1;
- (id)init;
- (bool)isFloating;
- (bool)prefersAnimation;
- (void)setFloating:(bool)arg1;

@end
