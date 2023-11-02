
@interface PLPrivacy : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedClientAuthLock;
    long long  _cachedClientAuthRightAddOnly;
    long long  _cachedClientAuthRightFullAccess;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _hasHandledLimitedLibraryReprompt;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    bool  _limitedLibrarySupported;
    PLAssetsdPrivacySupportClient * _privacySupportClient;
}

@property bool hasHandledLimitedLibraryReprompt;
@property (getter=isLimitedLibrarySupported, nonatomic) bool limitedLibrarySupported;

+ (id)_logDictionaryFromPhotosPickerClientLogFile:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_authStatusForScope:(long long)arg1;
- (void)_checkAuthStatusForPhotosAccessScope:(long long)arg1 preflightStatus:(long long)arg2 promptIfUnknown:(bool)arg3 resultHandler:(id /* block */)arg4;
- (void)_isPhotosAccessAllowedWithScope:(long long)arg1 promptIfUnknown:(bool)arg2 synchronous:(bool)arg3 resultHandler:(id /* block */)arg4;
- (long long)_resolvePreflightStatusForScope:(long long)arg1;
- (void)_setAuthStatus:(long long)arg1 scope:(long long)arg2;
- (long long)checkPhotosAccessAllowedWithScope:(long long)arg1;
- (void)checkPhotosAccessAllowedWithScope:(long long)arg1 handler:(id /* block */)arg2;
- (bool)hasHandledLimitedLibraryReprompt;
- (id)init;
- (bool)isLimitedLibrarySupported;
- (void)logPhotosAccessWithClientAuthorization:(id)arg1;
- (void)logPhotosAccessWithPhotoPickerClientIdentification:(id)arg1;
- (void)logPhotosAccessWithSelfAuditToken;
- (void)logPhotosPickerPresentedLibraryForClient:(id)arg1 usingOptions:(long long)arg2;
- (long long)photosAccessAllowedWithScope:(long long)arg1;
- (long long)photosAccessAllowedWithScope:(long long)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 clientAuthorization:(id)arg3;
- (id)photosPickerPresentedLibraryLogForClient:(id)arg1;
- (id)photosPickerPresentedLibraryLogsByClient;
- (void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
- (void)reportPhotosUseWithClientAuthorization:(id)arg1;
- (void)requestLimitedLibraryPromptForApplicationIdentifier:(id)arg1;
- (void)setHasHandledLimitedLibraryReprompt:(bool)arg1;
- (void)setLimitedLibrarySupported:(bool)arg1;

@end
