
@interface WBSKeyBagLockStatusChangedHandlerToken : NSObject {
    id /* block */  _handler;
}

@property (nonatomic, readonly) id /* block */ handler;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;

@end
