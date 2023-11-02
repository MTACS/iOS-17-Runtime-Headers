
@interface SFCapsuleContentViewRegistration : NSObject {
    id /* block */  _createViewBlock;
    NSMutableSet * _views;
}

- (void).cxx_destruct;
- (id)createOrDequeueViewWithExistingView:(id)arg1;
- (void)discardView:(id)arg1;
- (void)enqueueView:(id)arg1;
- (id)initWithCreateViewBlock:(id /* block */)arg1;

@end
