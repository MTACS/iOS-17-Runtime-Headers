
@interface AMSDialogButton : NSObject {
    id /* block */  _handler;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;

+ (id)buttonWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
- (void)setHandler:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
