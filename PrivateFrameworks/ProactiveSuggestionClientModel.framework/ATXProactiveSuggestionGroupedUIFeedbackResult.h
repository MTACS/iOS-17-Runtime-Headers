
@interface ATXProactiveSuggestionGroupedUIFeedbackResult : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    ATXPBProactiveSuggestionGroupedUIFeedbackResult * _proto;
}

@property (nonatomic, readonly) NSDate *endDateOfLastSession;
@property (nonatomic) bool isGroupSessionComplete;
@property (nonatomic, readonly) unsigned long long numAbandonedSuggestions;
@property (nonatomic, readonly) unsigned long long numEngagedSuggestions;
@property (nonatomic, readonly) unsigned long long numRejectedSuggestions;
@property (nonatomic, readonly) unsigned long long numSessionsWithAbandonedSuggestions;
@property (nonatomic, readonly) unsigned long long numSessionsWithEngagedSuggestions;
@property (nonatomic, readonly) unsigned long long numSessionsWithRejectedSuggestions;
@property (nonatomic, readonly) NSDate *startDateOfFirstSession;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)endDateOfLastSession;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionGroupedUIFeedbackResult:(id)arg1;
- (bool)isGroupSessionComplete;
- (id)jsonDict;
- (unsigned long long)numAbandonedSuggestions;
- (unsigned long long)numEngagedSuggestions;
- (unsigned long long)numRejectedSuggestions;
- (unsigned long long)numSessionsWithAbandonedSuggestions;
- (unsigned long long)numSessionsWithEngagedSuggestions;
- (unsigned long long)numSessionsWithRejectedSuggestions;
- (id)proto;
- (void)setIsGroupSessionComplete:(bool)arg1;
- (id)startDateOfFirstSession;
- (void)updateWithIntermediateSessionResults:(id)arg1;

@end
