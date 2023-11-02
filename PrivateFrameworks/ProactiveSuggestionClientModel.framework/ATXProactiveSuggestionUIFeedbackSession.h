
@interface ATXProactiveSuggestionUIFeedbackSession : NSObject <NSSecureCoding> {
    NSUUID * _blendingUICacheUpdateUUID;
    unsigned char  _consumerSubType;
    NSMutableOrderedSet * _engagedUUIDs;
    NSMutableOrderedSet * _rejectedUUIDs;
    NSDate * _sessionEndDate;
    NSString * _sessionIdentifier;
    <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> * _sessionMetadata;
    NSDate * _sessionStartDate;
    NSUUID * _sessionUUID;
    NSMutableOrderedSet * _shownUUIDs;
}

@property (nonatomic, readonly) NSUUID *blendingUICacheUpdateUUID;
@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) NSOrderedSet *engagedUUIDs;
@property (nonatomic, readonly) NSOrderedSet *rejectedUUIDs;
@property (nonatomic, readonly) NSDate *sessionEndDate;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> *sessionMetadata;
@property (nonatomic, readonly) NSDate *sessionStartDate;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSOrderedSet *shownUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingUICacheUpdateUUID;
- (unsigned char)consumerSubType;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedUUIDs;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 sessionIdentifier:(id)arg2 consumerSubType:(unsigned char)arg3 sessionStartDate:(id)arg4 sessionEndDate:(id)arg5 blendingUICacheUpdateUUID:(id)arg6 engagedUUIDs:(id)arg7 rejectedUUIDs:(id)arg8 shownUUIDs:(id)arg9 sessionMetadata:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionUIFeedbackSession:(id)arg1;
- (bool)isValidSession;
- (id)mutableEngagedUUIDs;
- (id)mutableRejectedUUIDs;
- (id)mutableShownUUIDs;
- (id)rejectedUUIDs;
- (id)sessionEndDate;
- (id)sessionIdentifier;
- (id)sessionMetadata;
- (id)sessionStartDate;
- (id)sessionUUID;
- (id)shownUUIDs;
- (void)updateBlendingUICacheUpdateUUIDIfUnset:(id)arg1;
- (void)updateConsumerSubTypeIfUnset:(unsigned char)arg1;
- (void)updateEngagedUUIDs:(id)arg1 rejectedUUIDs:(id)arg2 shownUUIDs:(id)arg3;
- (void)updateSessionEndDateIfUnset:(id)arg1;
- (void)updateSessionMetadataIfUnset:(id)arg1;
- (void)updateSessionStartDateIfUnset:(id)arg1;
- (id)validSessionMetadataClassNames;

@end
