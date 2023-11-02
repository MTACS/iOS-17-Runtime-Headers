
@interface AXUIAlert : UIView {
    AXUIAlertContext * _context;
    NSDictionary * _userInfo;
}

@property (nonatomic) AXUIAlertContext *context;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)alertWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6;

- (void).cxx_destruct;
- (void)addToContainerView:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
