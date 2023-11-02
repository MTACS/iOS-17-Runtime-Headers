
@interface _UIViewServiceSessionActivityRecord : NSObject <BSDebugDescriptionProviding> {
    NSHashTable * _activityWindows;
    bool  _hasInvalidated;
    unsigned long long  _lastActivity;
    <_UIViewServiceSessionActivityProviding> * _lastActivityProvider;
    unsigned long long  _lastActivityTimestamp;
    int  _lastViewControllerAppearState;
    UIWindow * _primaryHostedWindow;
    NSUUID * _sessionIdentifier;
    _UIActiveViewServiceSessionTracker * _tracker;
    long long  _userInterfaceIdiom;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
