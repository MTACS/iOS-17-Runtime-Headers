
@interface FLAlertControllerAction : NSObject {
    id /* block */  _handler;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
