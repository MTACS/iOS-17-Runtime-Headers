
@interface CKVocabularySandbox : NSObject {
    CKVAuxiliaryFilesystemBase * _base;
    NSObject<KVDonateServiceProvider> * _donateServiceProvider;
    CKVDonationManager * _donationManager;
    CKVIndexManager * _indexManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _sandboxBaseName;
    NSString * _sandboxId;
    bool  _sandboxIsSaved;
    NSObject<CKVSearcherProvider> * _searcherProvider;
    CKVSettings * _settings;
    double  _synchronousDonatorTimeout;
}

@property (nonatomic, readonly) NSObject<KVDonateServiceProvider> *donateServiceProvider;
@property (nonatomic, readonly) CKVIndexManager *indexManager;
@property (nonatomic, readonly) NSString *sandboxId;
@property (nonatomic, readonly) NSObject<CKVSearcherProvider> *searcherProvider;
@property (nonatomic, readonly) CKVSettings *settings;
@property (nonatomic) double synchronousDonatorTimeout;

+ (id)_sandboxBaseNameWithId:(id)arg1;
+ (id)_sandboxWithRawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)loadWithSandboxId:(id)arg1 error:(id*)arg2;
+ (id)sandboxWithProfile:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (id)sandboxWithProfile:(id)arg1 settings:(id)arg2 error:(id*)arg3;
+ (id)sandboxWithRawSpeechProfile:(id)arg1 error:(id*)arg2;
+ (id)sandboxWithRawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_loadSavedSettings;
- (bool)_saveSettings;
- (void)dealloc;
- (id)donateServiceProvider;
- (id)donatorWithOriginAppId:(id)arg1;
- (id)indexManager;
- (id)init;
- (id)initWithSandboxId:(id)arg1 sandboxIsSaved:(bool)arg2 settings:(id)arg3;
- (id)initWithSettings:(id)arg1;
- (void)reset;
- (id)rootDirectoryURL;
- (id)sandboxId;
- (id)save;
- (id)searcher;
- (id)searcherForUserId:(id)arg1;
- (id)searcherProvider;
- (void)setSynchronousDonatorTimeout:(double)arg1;
- (id)settings;
- (double)synchronousDonatorTimeout;
- (long long)synchronousDonatorWithOriginAppId:(id)arg1 replaceAllVocabularyOfClass:(Class)arg2 withVocabulary:(id)arg3;

@end
