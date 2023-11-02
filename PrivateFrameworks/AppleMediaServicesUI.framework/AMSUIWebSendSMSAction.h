
@interface AMSUIWebSendSMSAction : AMSUIWebAction {
    NSString * _body;
    NSString * _countryCode;
    NSString * _digits;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *digits;

- (void).cxx_destruct;
- (id)body;
- (id)countryCode;
- (id)digits;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setBody:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDigits:(id)arg1;
- (id)telephonyAccessPatterns;

@end
