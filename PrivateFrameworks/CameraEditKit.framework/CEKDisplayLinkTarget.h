
@interface CEKDisplayLinkTarget : NSObject {
    id /* block */  _handler;
}

@property (nonatomic, readonly, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)displayLinkDidFire:(id)arg1;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;

@end
