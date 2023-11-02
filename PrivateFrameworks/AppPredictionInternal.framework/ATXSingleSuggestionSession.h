
@interface ATXSingleSuggestionSession : NSObject <NSSecureCoding> {
    NSMutableOrderedSet * _associatedBlendingCacheUUIDs;
    NSMutableOrderedSet * _associatedClientModelCacheUUIDs;
    bool  _completed;
    NSData * _feedbackMetadata;
    NSMutableOrderedSet * _matchingSuggestionUUIDs;
    NSMutableDictionary * _sessionContextStatusByConsumerSubType;
    NSDate * _sessionExpirationDate;
    ATXProactiveSuggestion * _suggestion;
}

@property (nonatomic, retain) NSMutableOrderedSet *associatedBlendingCacheUUIDs;
@property (nonatomic, retain) NSMutableOrderedSet *associatedClientModelCacheUUIDs;
@property (nonatomic) bool completed;
@property (nonatomic, retain) NSData *feedbackMetadata;
@property (nonatomic, retain) NSMutableOrderedSet *matchingSuggestionUUIDs;
@property (nonatomic, retain) NSMutableDictionary *sessionContextStatusByConsumerSubType;
@property (nonatomic, retain) NSDate *sessionExpirationDate;
@property (nonatomic, retain) ATXProactiveSuggestion *suggestion;

+ (id)stringForSuggestionSessionStatus:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedBlendingCacheUUIDs;
- (id)associatedClientModelCacheUUIDs;
- (bool)completed;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateShownAndEngagedSessionStatusesAndConsumerSubTypesWithBlock:(id /* block */)arg1;
- (id)feedbackMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackedProactiveSuggestion:(id)arg1 clientModelCacheUUID:(id)arg2 feedbackMetadata:(id)arg3;
- (id)initWithTrackedProactiveSuggestion:(id)arg1 feedbackMetadata:(id)arg2 matchingSuggestionUUIDs:(id)arg3 associatedBlendingCacheUUIDs:(id)arg4 associatedClientModelCacheUUIDs:(id)arg5 sessionContextStatuses:(id)arg6 sessionExpirationDate:(id)arg7 completed:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSingleSuggestionSession:(id)arg1;
- (id)matchingSuggestionUUIDs;
- (id)sessionContextStatusByConsumerSubType;
- (id)sessionExpirationDate;
- (void)setAssociatedBlendingCacheUUIDs:(id)arg1;
- (void)setAssociatedClientModelCacheUUIDs:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setFeedbackMetadata:(id)arg1;
- (void)setMatchingSuggestionUUIDs:(id)arg1;
- (void)setSessionContextStatusByConsumerSubType:(id)arg1;
- (void)setSessionExpirationDate:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;
- (bool)tryUpdateSessionStatus:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;

@end
