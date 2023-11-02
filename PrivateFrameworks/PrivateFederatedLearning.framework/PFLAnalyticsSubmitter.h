
@interface PFLAnalyticsSubmitter : NSObject {
    NSString * _submitterId;
}

@property (nonatomic, readonly) NSString *submitterId;

+ (id)shared;
+ (id)stringForKey:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)submitAnalyticsForKey:(unsigned long long)arg1 value:(id)arg2;
- (id)submitterId;

@end
