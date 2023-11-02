
@interface SFAnalyticsMatchingRule : NSObject {
    NSString * _eventName;
    NSDate * _lastMatch;
    NSDictionary * _matchingDictionary;
    SECSFARule * _rule;
}

@property (retain) NSString *eventName;
@property (retain) NSDate *lastMatch;
@property (retain) NSDictionary *matchingDictionary;
@property (retain) SECSFARule *rule;

- (void).cxx_destruct;
- (unsigned int)doAction:(id)arg1 logger:(id)arg2;
- (id)eventName;
- (id)initWithSFARule:(id)arg1 logger:(id)arg2;
- (bool)isSubsetMatch:(id)arg1 target:(id)arg2;
- (id)lastMatch;
- (id)lastMatchTimeKey;
- (bool)matchAttributes:(id)arg1 logger:(id)arg2;
- (id)matchingDictionary;
- (id)rule;
- (void)setEventName:(id)arg1;
- (void)setLastMatch:(id)arg1;
- (void)setMatchingDictionary:(id)arg1;
- (void)setRule:(id)arg1;
- (bool)shouldRatelimit:(id)arg1;
- (bool)valueMatch:(id)arg1 target:(id)arg2;

@end
