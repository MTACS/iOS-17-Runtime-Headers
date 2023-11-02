
@interface SKAuthenticationPresentEvent : SKEvent {
    NSString * _password;
    int  _passwordType;
}

@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly) int passwordType;

- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)initWithPasswordType:(int)arg1 password:(id)arg2;
- (id)password;
- (int)passwordType;

@end
