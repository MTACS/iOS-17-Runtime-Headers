
@interface BCSCoalesceObjectData : NSObject <BCSCoalesceObjectProtocol> {
    NSString * _coalesceKey;
    id /* block */  _dataCompletionBlock;
}

@property (nonatomic, readonly) NSString *coalesceKey;
@property (nonatomic, readonly, copy) id /* block */ dataCompletionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coalesceKey;
- (id /* block */)dataCompletionBlock;
- (id)initWithCompletionBlock:(id /* block */)arg1 coalesceKey:(id)arg2;

@end
