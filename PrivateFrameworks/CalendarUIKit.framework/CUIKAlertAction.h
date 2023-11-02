
@interface CUIKAlertAction : NSObject {
    id /* block */  _handler;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) NSString *title;

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
- (long long)style;
- (id)title;

@end
