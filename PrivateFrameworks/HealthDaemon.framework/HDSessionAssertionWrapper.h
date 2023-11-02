
@interface HDSessionAssertionWrapper : NSObject {
    id /* block */  _createAndTakeBlock;
    HDAssertion * _currentAssertion;
}

@property (nonatomic, readonly, copy) id /* block */ createAndTakeBlock;
@property (nonatomic, readonly) bool taken;

- (void).cxx_destruct;
- (id /* block */)createAndTakeBlock;
- (void)dealloc;
- (id)initWithCreateAndTakeBlock:(id /* block */)arg1;
- (bool)taken;

@end
