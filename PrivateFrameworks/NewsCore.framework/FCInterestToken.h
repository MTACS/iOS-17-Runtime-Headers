
@interface FCInterestToken : NSObject {
    id /* block */  _removeInterestBlock;
}

@property (nonatomic, copy) id /* block */ removeInterestBlock;

+ (id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(id /* block */)arg2;
+ (id)interestTokenWithRemoveInterestBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(id /* block */)arg2;
- (id /* block */)removeInterestBlock;
- (void)setRemoveInterestBlock:(id /* block */)arg1;

@end
