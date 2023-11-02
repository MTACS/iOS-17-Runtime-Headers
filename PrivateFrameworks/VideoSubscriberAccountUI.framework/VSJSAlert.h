
@interface VSJSAlert : IKJSObject <VSJSAlert> {
    NSArray * _actions;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actions;
- (id)init;
- (id)message;
- (void)setActions:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
