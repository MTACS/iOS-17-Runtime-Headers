
@interface _UIOShowAlertAction_TestingOnly : _UIOServerAction {
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (bool)isPermitted;
- (id)message;
- (void)performActionFromConnection:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
