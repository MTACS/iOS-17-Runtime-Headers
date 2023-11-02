
@interface DBMutableWorkspaceStateChangeRequest : DBWorkspaceStateChangeRequest

- (void)activateApplication:(id)arg1;
- (void)activateApplication:(id)arg1 withSettings:(id)arg2;
- (void)activateHomeScreen;
- (void)activateSiri;
- (void)activateSiriFloating;
- (void)activateStackedApplication:(id)arg1;
- (void)activateStackedApplication:(id)arg1 withSettings:(id)arg2;
- (void)addChangeItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deactivateApplication:(id)arg1;
- (void)deactivateSiri;
- (void)destroyApplication:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeChangeItem:(id)arg1;

@end
