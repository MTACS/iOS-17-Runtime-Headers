
@interface CPAnalyticsEventMatcher : NSObject {
    NSArray * _conditionalChecks;
    NSString * _eventKeyToMatch;
    NSDictionary * _eventPropertiesToMatch;
}

@property (nonatomic, readonly) NSArray *conditionalChecks;
@property (nonatomic, readonly) NSString *eventKeyToMatch;
@property (nonatomic, readonly) NSDictionary *eventPropertiesToMatch;

+ (id)eventMatcherWithConfiguration:(id)arg1;
+ (id)eventMatcherWithEventName:(id)arg1;
+ (id)eventMatcherWithEventName:(id)arg1 properties:(id)arg2;

- (void).cxx_destruct;
- (id)_validateAndParseConditionalChecks:(id)arg1;
- (id)_validateAndParseEventKey:(id)arg1;
- (id)_validateAndParseEventProperties:(id)arg1;
- (id)conditionalChecks;
- (bool)doesMatch:(id)arg1;
- (id)eventKeyToMatch;
- (id)eventPropertiesToMatch;
- (id)initWithConfig:(id)arg1;

@end
