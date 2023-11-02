
@interface COExecutionContext : NSObject <NSCopying, NSMutableCopying> {
    NSDictionary * _metadata;
}

@property (nonatomic, copy) NSDictionary *metadata;

- (void).cxx_destruct;
- (id /* block */)analyticsRecorder;
- (void)assertDispatchQueue;
- (id)constituentForMe;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dispatchAsync:(id /* block */)arg1;
- (id)dispatchQueue;
- (void)dispatchSync:(id /* block */)arg1;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)leaderElectionConfigured;
- (id)meshControllerDescription;
- (id)meshName;
- (id)metadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)networkActivityFactory;
- (id)objectForKey:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
