
@interface VUIAuthenticationManager : NSObject {
    ACAccount * __activeUserAccount;
    AMSPromise * __authPromise;
    bool  __isLibraryOnlyCountry;
    bool  __isLibraryOnlyCountryResolved;
    ACAccount * __localUserAccount;
    UIImage * __profileImage;
    AAUIProfilePictureStore * __profilePictureStore;
    AMSBinaryPromise * __signoutPromise;
}

@property (nonatomic, readonly) ACAccount *_activeUserAccount;
@property (nonatomic, retain) AMSPromise *_authPromise;
@property (nonatomic) bool _isLibraryOnlyCountry;
@property (nonatomic) bool _isLibraryOnlyCountryResolved;
@property (nonatomic, readonly) ACAccount *_localUserAccount;
@property (nonatomic, readonly) UIImage *_profileImage;
@property (nonatomic, readonly) AAUIProfilePictureStore *_profilePictureStore;
@property (nonatomic, retain) AMSBinaryPromise *_signoutPromise;

+ (id)DSID;
+ (bool)_isLibraryOnlyCountry;
+ (bool)_isLibraryOnlyCountryResolved;
+ (void)_performAuthenticationTask:(id)arg1 isSilent:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)_profileImage;
+ (void)_recordLog:(id)arg1 isSignOut:(bool)arg2 isSilent:(bool)arg3;
+ (id)_userAccount;
+ (bool)allowsAccountModification;
+ (id)creditsString;
+ (id)identifier;
+ (bool)isDemoAccount;
+ (bool)isLibraryOnlyCountry;
+ (bool)isLibraryOnlyCountryResolved;
+ (void)requestAuthenticationAlwaysPrompt:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)sharedInstance;
+ (void)signInUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)signOutUserWithCompletionHandler:(id /* block */)arg1;
+ (id)storefrontId;
+ (id)userAccountName;
+ (id)userFirstName;
+ (id)userFullName;
+ (bool)userHasActiveAccount;
+ (id)userLastName;
+ (id)userProfileImage;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_activeUserAccount;
- (id)_authPromise;
- (void)_determineIfLibraryOnlyCountry;
- (void)_fetchProfileImage;
- (bool)_isLibraryOnlyCountry;
- (bool)_isLibraryOnlyCountryResolved;
- (id)_localUserAccount;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)_profileImage;
- (id)_profilePictureStore;
- (void)_setUpProfileImageStoreAndFetchProfileImage;
- (bool)_shouldNotifyAccountChange:(id)arg1 newAccount:(id)arg2;
- (id)_signoutPromise;
- (id)init;
- (void)set_authPromise:(id)arg1;
- (void)set_isLibraryOnlyCountry:(bool)arg1;
- (void)set_isLibraryOnlyCountryResolved:(bool)arg1;
- (void)set_signoutPromise:(id)arg1;

@end
