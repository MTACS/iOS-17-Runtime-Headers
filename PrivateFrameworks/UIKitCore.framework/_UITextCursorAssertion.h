
@interface _UITextCursorAssertion : NSObject <UITextCursorAssertion> {
    UITextCursorAssertionController * _controller;
    unsigned long long  _options;
    NSString * _reason;
    NSDictionary * _userInfo;
}

@property (nonatomic) UITextCursorAssertionController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)_initWithReason:(id)arg1 options:(unsigned long long)arg2 controller:(id)arg3 userInfo:(id)arg4;
- (id)controller;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (unsigned long long)options;
- (id)reason;
- (void)setController:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setReason:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
