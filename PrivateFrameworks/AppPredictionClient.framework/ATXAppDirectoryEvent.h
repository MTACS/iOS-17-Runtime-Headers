
@interface ATXAppDirectoryEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol, ATXProtoBufWrapper, NSSecureCoding> {
    double  _absoluteDate;
    NSUUID * _blendingCacheUUID;
    NSString * _bundleId;
    NSNumber * _bundleIndex;
    NSNumber * _categoryID;
    NSNumber * _categoryIndex;
    NSArray * _engagedSuggestionIds;
    unsigned long long  _eventType;
    ATXAppDirectoryEventMetadata * _metadata;
    NSNumber * _searchQueryLength;
    NSNumber * _searchTab;
    NSArray * _shownSuggestionIds;
}

@property (nonatomic, retain) NSUUID *blendingCacheUUID;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSNumber *bundleIndex;
@property (nonatomic, retain) NSNumber *categoryID;
@property (nonatomic, retain) NSNumber *categoryIndex;
@property (nonatomic, readonly) unsigned char consumerSubTypeForUIStream;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *engagedSuggestionIds;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXAppDirectoryEventMetadata *metadata;
@property (nonatomic, retain) NSNumber *searchQueryLength;
@property (nonatomic, retain) NSNumber *searchTab;
@property (nonatomic, retain) NSArray *shownSuggestionIds;
@property (readonly) Class superclass;

+ (id)_objectForKey:(id)arg1 classType:(Class)arg2 fromMetadata:(id)arg3;
+ (id)appDirectoryEventWithEventType:(unsigned long long)arg1 metadata:(id)arg2;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingCacheUUID;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;
- (id)bundleId;
- (id)bundleIndex;
- (id)categoryID;
- (id)categoryIndex;
- (unsigned char)consumerSubTypeForUIStream;
- (unsigned int)dataVersion;
- (id)date;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedSuggestionIds;
- (unsigned long long)eventType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAbsoluteDate:(double)arg1 eventType:(unsigned long long)arg2 categoryID:(id)arg3 categoryIndex:(id)arg4 bundleId:(id)arg5 bundleIndex:(id)arg6 searchQueryLength:(id)arg7 searchTab:(id)arg8 blendingCacheUUID:(id)arg9 shownSuggestionIds:(id)arg10 engagedSuggestionIds:(id)arg11 metadata:(id)arg12;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 eventType:(unsigned long long)arg2 categoryID:(id)arg3 categoryIndex:(id)arg4 bundleId:(id)arg5 bundleIndex:(id)arg6 searchQueryLength:(id)arg7 searchTab:(id)arg8 blendingCacheUUID:(id)arg9 shownSuggestionIds:(id)arg10 engagedSuggestionIds:(id)arg11 metadata:(id)arg12;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXAppDirectoryEvent:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)metadata;
- (id)proto;
- (id)searchQueryLength;
- (id)searchTab;
- (id)serialize;
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;
- (void)setBlendingCacheUUID:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setBundleIndex:(id)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setCategoryIndex:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEngagedSuggestionIds:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSearchQueryLength:(id)arg1;
- (void)setSearchTab:(id)arg1;
- (void)setShownSuggestionIds:(id)arg1;
- (id)shownSuggestionIds;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;

@end
