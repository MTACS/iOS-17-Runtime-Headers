
@interface FCFileCoordinatedAppConfigurationManager : NSObject <FCAppConfigurationDropboxType, FCNewsAppConfigurationManager> {
    <FCNewsAppConfiguration> * _fetchedAppConfiguration;
    FCFileCoordinatedDictionary * _fileCoordinatedDictionary;
    NFUnfairLock * _lock;
    NSString * _storefrontID;
}

@property (nonatomic, readonly) <FCNewsAppConfiguration> *appConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *feldsparID;
@property (nonatomic, copy) <FCNewsAppConfiguration> *fetchedAppConfiguration;
@property (nonatomic, readonly) FCFileCoordinatedDictionary *fileCoordinatedDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCNewsAppConfiguration><FCJSONEncodableObjectProviding> *jsonEncodableAppConfiguration;
@property (nonatomic, readonly) NFUnfairLock *lock;
@property (nonatomic, readonly) <FCNewsAppConfiguration> *possiblyUnfetchedAppConfiguration;
@property (nonatomic, readonly) NSArray *segmentSetIDs;
@property (nonatomic, readonly, copy) NSString *storefrontID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *treatmentIDs;

- (void).cxx_destruct;
- (id)_appConfigurationFromDictionary:(id)arg1 forStorefrontID:(id)arg2;
- (id)_dictionaryFromAppConfiguration:(id)arg1;
- (void)addAppConfigObserver:(id)arg1;
- (id)appConfiguration;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (void)depositAppConfiguration:(id)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchedAppConfiguration;
- (id)fileCoordinatedDictionary;
- (id)init;
- (id)initWithFileURL:(id)arg1 storefrontID:(id)arg2;
- (id)lock;
- (id)possiblyUnfetchedAppConfiguration;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(id /* block */)arg2;
- (void)removeAppConfigObserver:(id)arg1;
- (void)setFetchedAppConfiguration:(id)arg1;
- (id)storefrontID;

@end
