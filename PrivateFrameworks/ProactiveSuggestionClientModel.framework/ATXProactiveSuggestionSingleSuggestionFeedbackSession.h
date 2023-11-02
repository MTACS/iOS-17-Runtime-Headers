
@interface ATXProactiveSuggestionSingleSuggestionFeedbackSession : NSObject <NSSecureCoding> {
    NSMutableOrderedSet * _associatedBlendingCacheUUIDs;
    NSMutableOrderedSet * _associatedClientModelCacheUUIDs;
    NSData * _feedbackMetadata;
    NSMutableOrderedSet * _matchingSuggestionUUIDs;
    NSMutableDictionary * _sessionContextStatusByConsumerSubType;
    ATXProactiveSuggestion * _suggestion;
}

@property (nonatomic, readonly) NSMutableOrderedSet *associatedBlendingCacheUUIDs;
@property (nonatomic, readonly) NSMutableOrderedSet *associatedClientModelCacheUUIDs;
@property (nonatomic, readonly) NSData *feedbackMetadata;
@property (nonatomic, readonly) NSMutableOrderedSet *matchingSuggestionUUIDs;
@property (nonatomic, readonly) NSMutableDictionary *sessionContextStatusByConsumerSubType;
@property (nonatomic, readonly) ATXProactiveSuggestion *suggestion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedBlendingCacheUUIDs;
- (id)associatedClientModelCacheUUIDs;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateShownAndEngagedEngagementTypesAndConsumerSubTypesWithBlock:(id /* block */)arg1;
- (id)feedbackMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProactiveSuggestion:(id)arg1 clientModelCacheUUID:(id)arg2 feedbackMetadata:(id)arg3;
- (id)initWithProactiveSuggestion:(id)arg1 feedbackMetadata:(id)arg2 matchingSuggestionUUIDs:(id)arg3 associatedBlendingCacheUUIDs:(id)arg4 associatedClientModelCacheUUIDs:(id)arg5 sessionContextStatuses:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionSingleSuggestionFeedbackSession:(id)arg1;
- (id)matchingSuggestionUUIDs;
- (id)sessionContextStatusByConsumerSubType;
- (id)suggestion;
- (bool)tryUpdateEngagementType:(long long)arg1 consumerSubType:(unsigned char)arg2;

@end
