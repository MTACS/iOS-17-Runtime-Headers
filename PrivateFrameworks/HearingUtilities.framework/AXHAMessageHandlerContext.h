
@interface AXHAMessageHandlerContext : NSObject {
    id /* block */  _block;
    id  _target;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithTarget:(id)arg1 block:(id /* block */)arg2;
- (id)target;

@end
