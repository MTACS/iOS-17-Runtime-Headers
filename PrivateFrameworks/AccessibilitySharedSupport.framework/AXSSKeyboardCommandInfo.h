
@interface AXSSKeyboardCommandInfo : NSObject {
    id /* block */  _downHandler;
    id /* block */  _handler;
    bool  _handlesBothDownAndUp;
    id /* block */  _upHandler;
}

@property (nonatomic, readonly) id /* block */ downHandler;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) bool handlesBothDownAndUp;
@property (nonatomic, readonly) id /* block */ upHandler;

+ (id)infoWithDownHandler:(id /* block */)arg1 upHandler:(id /* block */)arg2;
+ (id)infoWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_initWithHandler:(id /* block */)arg1 downHandler:(id /* block */)arg2 upHandler:(id /* block */)arg3 handlesBothDownAndUp:(bool)arg4;
- (id /* block */)downHandler;
- (id /* block */)handler;
- (bool)handlesBothDownAndUp;
- (id /* block */)upHandler;

@end
