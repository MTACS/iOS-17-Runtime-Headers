
@interface WFActionAuxiliaryButton : NSObject {
    id /* block */  _handler;
    NSString * _symbolName;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic, copy) NSString *title;

+ (id)buttonWithTitle:(id)arg1 symbolName:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2 handler:(id /* block */)arg3;
- (void)setHandler:(id /* block */)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)symbolName;
- (id)title;

@end
