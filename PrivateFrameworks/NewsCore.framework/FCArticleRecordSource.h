
@interface FCArticleRecordSource : FCRecordSource {
    NSArray * _articleTagMetadataRecordKeys;
    NSString * _conversionCohortsExpField;
    NSArray * _conversionRecordKeys;
    unsigned long long  _desiredArticleRecordFieldOptions;
    NSArray * _embeddingRecordKeys;
    NSString * _engagementCohortsExpField;
    NSArray * _engagementRecordKeys;
    NFUnfairLock * _experimentalFieldsLock;
    NSArray * _topicFlagsRecordKeys;
}

@property (nonatomic, retain) NSArray *articleTagMetadataRecordKeys;
@property (nonatomic, retain) NSString *conversionCohortsExpField;
@property (nonatomic, retain) NSArray *conversionRecordKeys;
@property (nonatomic) unsigned long long desiredArticleRecordFieldOptions;
@property (nonatomic, retain) NSArray *embeddingRecordKeys;
@property (nonatomic, retain) NSString *engagementCohortsExpField;
@property (nonatomic, retain) NSArray *engagementRecordKeys;
@property (nonatomic, retain) NFUnfairLock *experimentalFieldsLock;
@property (nonatomic, retain) NSArray *topicFlagsRecordKeys;

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)identifierFromCKRecord:(id)arg1;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (bool)supportsDeletions;
+ (bool)useTaggedImages;

- (void).cxx_destruct;
- (void)_setEngagementCohortsExpField:(id)arg1 conversionCohortsExpField:(id)arg2;
- (id)alwaysLocalizedKeys;
- (id)articleTagMetadataFromCKRecord:(id)arg1;
- (id)articleTagMetadataRecordKeys;
- (id)articleTopicsFromCKRecord:(id)arg1 engagement:(id)arg2 conversionStats:(id)arg3 tagMetadata:(id)arg4;
- (id)conversionCohortsExpField;
- (id)conversionRecordKeys;
- (id)conversionStatsFromCKRecord:(id)arg1;
- (unsigned long long)desiredArticleRecordFieldOptions;
- (id)embeddingRecordKeys;
- (id)engagementCohortsExpField;
- (id)engagementFromCKRecord:(id)arg1;
- (id)engagementRecordKeys;
- (id)experimentalFieldsLock;
- (id)experimentalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 appActivityMonitor:(id)arg3 backgroundTaskable:(id)arg4 desiredArticleRecordFieldOptions:(unsigned long long)arg5 experimentalizableFieldsPostfix:(id)arg6 engagementCohortsExpField:(id)arg7 conversionCohortsExpField:(id)arg8 activeTreatmentID:(id)arg9;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 appActivityMonitor:(id)arg3 backgroundTaskable:(id)arg4 experimentalizableFieldsPostfix:(id)arg5 activeTreatmentID:(id)arg6;
- (id)localizableExperimentalizableKeys;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)saveArticleRecords:(id)arg1;
- (id)saveFeedItemAndArticleRecords:(id)arg1;
- (void)setArticleTagMetadataRecordKeys:(id)arg1;
- (void)setConversionCohortsExpField:(id)arg1;
- (void)setConversionRecordKeys:(id)arg1;
- (void)setDesiredArticleRecordFieldOptions:(unsigned long long)arg1;
- (void)setEmbeddingRecordKeys:(id)arg1;
- (void)setEngagementCohortsExpField:(id)arg1;
- (void)setEngagementRecordKeys:(id)arg1;
- (void)setExperimentalFieldsLock:(id)arg1;
- (void)setTopicFlagsRecordKeys:(id)arg1;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)topicFlagsFromCKRecord:(id)arg1;
- (id)topicFlagsRecordKeys;
- (void)updateEngagementCohortsExpField:(id)arg1 conversionCohortsExpField:(id)arg2;
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;

@end
