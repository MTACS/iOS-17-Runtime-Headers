
@interface CESRSpeechProfileBuilder : NSObject {
    NSXPCConnection * _connection;
    long long  _dataProtectionClass;
    NSURL * _directory;
    NSMutableArray * _isBoosted;
    NSLocale * _locale;
    NSMutableArray * _serializedItems;
    unsigned long long  _summedCommittedItemsMemoryInBytes;
    unsigned long long  _uncommittedItemsMemoryInBytes;
    NSString * _userId;
}

@property (nonatomic, readonly) long long dataProtectionClass;
@property (nonatomic, readonly) NSURL *directory;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *userId;

+ (id)CESRErrorForXPCError:(id)arg1;
+ (id)categoryToFieldTypeMap;
+ (id)categoryToLimitHintMap;
+ (void)deleteLegacyProfiles;
+ (bool)deleteProfileAtDirectory:(id)arg1 locale:(id)arg2 userId:(id)arg3 error:(id*)arg4;
+ (id)getSpeechLocaleForLocale:(id)arg1;
+ (id)profileDirPathFromBasePath:(id)arg1 language:(id)arg2 userId:(id)arg3;
+ (id)profileFilePathFromBasePath:(id)arg1 language:(id)arg2 userId:(id)arg3;
+ (bool)shouldOverrideDeferralForCategory:(id)arg1 updateMode:(unsigned long long)arg2;
+ (id)speechProfilePathsForLocale:(id)arg1;
+ (id)supportedCategories;

- (void).cxx_destruct;
- (bool)_flushItemsWithError:(id*)arg1;
- (id)_newConnection;
- (bool)_setProfileConfigWithLanguage:(id)arg1 profileDir:(id)arg2 userId:(id)arg3 dataProtectionClass:(long long)arg4;
- (bool)addExperimentId:(id)arg1 error:(id*)arg2;
- (bool)addVocabularyItem:(id)arg1 error:(id*)arg2;
- (bool)addVocabularyItem:(id)arg1 isBoosted:(bool)arg2 error:(id*)arg3;
- (bool)beginWithCategoriesAndVersions:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
- (bool)cancelCategoriesWithError:(id*)arg1;
- (long long)dataProtectionClass;
- (void)dealloc;
- (id)directory;
- (bool)finishAndSaveProfile:(bool)arg1 error:(id*)arg2;
- (id)getExperimentIdsWithError:(id*)arg1;
- (unsigned long long)getGlobalItemsMemoryLimitInBytes;
- (long long)getVersionForCategory:(id)arg1 error:(id*)arg2;
- (id)initWithDirectory:(id)arg1 locale:(id)arg2 userId:(id)arg3 dataProtectionClass:(long long)arg4;
- (id)locale;
- (bool)removeExperimentId:(id)arg1 error:(id*)arg2;
- (id)userId;

@end
