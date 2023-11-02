
@protocol _DKStandingQuery

@required

- (NSObject<OS_xpc_object> *)activity;
- (void)executeWithStorage:(_DKKnowledgeStorage *)arg1;
- (NSObject *)fetchResult;
- (NSString *)queryIdentifier;
- (void)setActivity:(NSObject<OS_xpc_object> *)arg1;
- (void)setQueryIdentifier:(NSString *)arg1;

@end
