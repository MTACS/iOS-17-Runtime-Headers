
@interface FCUserEventHistoryPruningPolicies : NSObject {
    NSArray * _policies;
}

@property (nonatomic, retain) NSArray *policies;

+ (id)defaultPolicy;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)policies;
- (void)setPolicies:(id)arg1;

@end
