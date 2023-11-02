
@interface CLSServerAlert : CLSObject {
    long long  _alertType;
    NSDictionary * _defaultButtonInfo;
    long long  _displayRoles;
    long long  _displayedCount;
    NSString * _message;
    NSArray * _otherButtonInfos;
    NSString * _title;
}

@property (nonatomic) long long alertType;
@property (nonatomic, copy) NSDictionary *defaultButtonInfo;
@property (nonatomic) long long displayRoles;
@property (nonatomic) long long displayedCount;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *otherButtonInfos;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (long long)alertType;
- (id)defaultButtonInfo;
- (id)dictionaryRepresentation;
- (long long)displayRoles;
- (long long)displayedCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)otherButtonInfos;
- (void)setAlertType:(long long)arg1;
- (void)setDefaultButtonInfo:(id)arg1;
- (void)setDisplayRoles:(long long)arg1;
- (void)setDisplayedCount:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setOtherButtonInfos:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
