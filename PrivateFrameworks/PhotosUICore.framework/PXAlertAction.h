
@interface PXAlertAction : NSObject {
    id /* block */  _action;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, readonly) id /* block */ action;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)init;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (long long)style;
- (id)title;

@end
