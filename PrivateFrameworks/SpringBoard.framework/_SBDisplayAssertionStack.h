
@interface _SBDisplayAssertionStack : NSObject <SBDisplayAssertionProviding> {
    bool  _activated;
    NSMapTable * _assertionControlPreferences;
    <_SBDisplayAssertionStackDelegate> * _delegate;
    bool  _invalidated;
    FBSDisplayIdentity * _rootIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertion:(id)arg1 updatedPreferences:(id)arg2;
- (void)_assertionDidInvalidate:(id)arg1;
- (void)_evalAndApplyOldPreferences:(id)arg1 newPreferences:(id)arg2;
- (id)acquireAssertionForDisplay:(id)arg1 level:(unsigned long long)arg2 deactivationReasons:(unsigned long long)arg3 delegate:(id)arg4;
- (void)activateAssertionsForDisplay:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayIdentity;
- (id)initWithRootDisplay:(id)arg1 delegate:(id)arg2;
- (void)invalidateAssertionForDerivedDisplayDisconnect:(id)arg1;
- (void)invalidateForDisplayDisconnect;

@end
