
@interface CUIKAlertController : NSObject {
    NSMutableArray * _actions;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2;

- (void).cxx_destruct;
- (long long)_actionStyleForActionStyle:(long long)arg1;
- (id)actions;
- (void)addAction:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)message;
- (void)presentFromSource:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
