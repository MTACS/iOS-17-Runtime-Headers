
@interface TokenEnumeratorContext : NSObject {
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;

@end
