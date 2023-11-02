
@interface BCSCoalesceObjectShard : NSObject <BCSCoalesceObjectProtocol> {
    NSString * _coalesceKey;
    id /* block */  _shardCompletionBlock;
}

@property (nonatomic, readonly) NSString *coalesceKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ shardCompletionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coalesceKey;
- (id)initWithCompletionBlock:(id /* block */)arg1 coalesceKey:(id)arg2;
- (id /* block */)shardCompletionBlock;

@end
