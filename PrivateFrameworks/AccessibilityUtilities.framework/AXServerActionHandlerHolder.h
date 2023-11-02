
@interface AXServerActionHandlerHolder : NSObject {
    id /* block */  _handler;
    NSString * _identifier;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)identifier;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;

@end
