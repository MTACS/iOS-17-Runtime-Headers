
@interface HLPAnalyticsEventController : NSObject {
    NSMutableDictionary * _countersByKey;
    NSString * _identifier;
    NSDictionary * _requiredKeys;
    NSString * _version;
}

@property (nonatomic, retain) NSMutableDictionary *countersByKey;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *requiredKeys;
@property (nonatomic, retain) NSString *version;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)configureWithHelpBookID:(id)arg1 version:(id)arg2;
- (id)counterForKey:(id)arg1;
- (id)countersByKey;
- (id)identifier;
- (void)incrementCounterForKey:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1;
- (id)requiredKeys;
- (void)setCountersByKey:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
