
@interface CPAnalyticsCompoundEventMatcher : CPAnalyticsEventMatcher {
    NSArray * _subEventMatchers;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSArray *subEventMatchers;
@property (nonatomic, readonly) unsigned long long type;

+ (id)andEventMatcherWithSubEventMatchers:(id)arg1;
+ (id)notEventMatcherWithSubEventMatcher:(id)arg1;
+ (id)orEventMatcherWithSubEventMatchers:(id)arg1;

- (void).cxx_destruct;
- (bool)doesMatch:(id)arg1;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 subEventMatchers:(id)arg2;
- (id)subEventMatchers;
- (unsigned long long)type;

@end
