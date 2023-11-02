
@interface SBSAContainerPressBehaviorProvider : SBSABasePreferencesProvider {
    SBSAContainerLongPressGestureDescription * _activeGestureDescription;
    NSUUID * _identifierOfActiveTimer;
}

- (void).cxx_destruct;
- (id)_contentInteractionBeginBehaviorSettings;
- (id)preferencesFromContext:(id)arg1;

@end
