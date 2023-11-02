
@interface PLAssetsdPrivacySupportService : NSObject <PLAssetsdPrivacySupportServiceProtocol> {
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConnectionAuthorization:(id)arg1;
- (void)presentLimitedLibraryPickerReprompt:(id /* block */)arg1;
- (void)setClientPrivacyOptions:(id)arg1 reply:(id /* block */)arg2;

@end
