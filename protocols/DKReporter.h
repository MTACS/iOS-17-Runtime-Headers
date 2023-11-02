
@protocol DKReporter <NSObject>

@required

- (DKComponentIdentity *)componentIdentity;
- (bool)isPresent;
- (void)populateAttributes:(NSMutableDictionary *)arg1;
- (void)setupWithContext:(DKReporterContext *)arg1;

@optional

- (void)teardown;

@end
