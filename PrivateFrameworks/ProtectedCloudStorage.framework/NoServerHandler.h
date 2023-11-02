
@interface NoServerHandler : NSObject {
    id /* block */  _handler;
}

@property (readonly) id /* block */ handler;

- (void).cxx_destruct;
- (void)call;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;

@end
