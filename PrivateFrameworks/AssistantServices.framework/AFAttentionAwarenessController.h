
@interface AFAttentionAwarenessController : NSObject {
    AWAttentionAwarenessClient * _attentionClient;
    NSObject<OS_dispatch_queue> * _attentionQueue;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)requestAttentionStateWithCompletion:(id /* block */)arg1;

@end
