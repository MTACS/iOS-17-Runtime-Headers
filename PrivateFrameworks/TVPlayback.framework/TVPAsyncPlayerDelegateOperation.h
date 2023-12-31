
@interface TVPAsyncPlayerDelegateOperation : NSObject {
    id /* block */  _block;
    NSNumber * _identifier;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, readonly) NSNumber *identifier;

- (void).cxx_destruct;
- (id /* block */)block;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
