
@interface VSRestrictionsCenter : NSObject <VSManagedProfileConnectionObserver> {
    bool  _accountModificationAllowed;
    VSManagedProfileConnection * _profileConnection;
}

@property (getter=isAcountModificationAllowed, nonatomic) bool accountModificationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSManagedProfileConnection *profileConnection;
@property (readonly) Class superclass;

+ (id)defaultRestrictionsCenter;

- (void).cxx_destruct;
- (bool)_canInstallAppsAtAll;
- (void)_updateAccountModificationAllowed;
- (bool)canInstallAppWithRating:(long long)arg1;
- (void)dealloc;
- (id)init;
- (bool)isAcountModificationAllowed;
- (id)profileConnection;
- (void)profileConnectionProfileChanged:(id)arg1;
- (void)profileConnectionSettingsChanged:(id)arg1;
- (void)setAccountModificationAllowed:(bool)arg1;
- (void)setProfileConnection:(id)arg1;

@end
