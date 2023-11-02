
@interface BFFLinkHandler : NSObject {
    UIButton * _button;
    id /* block */  _handler;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (id)button;
- (void)buttonPressed:(id)arg1;
- (id /* block */)handler;
- (id)init;
- (void)setButton:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
