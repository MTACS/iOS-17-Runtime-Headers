
@interface SUInstallPolicy : NSObject <NSSecureCoding> {
    bool  _autoUpdateEnabled;
    NSString * _clientName;
    unsigned long long  _skipsAllowed;
    unsigned long long  _type;
    bool  _useDarkBoot;
}

@property (nonatomic, readonly) bool autoUpdateEnabled;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic) unsigned long long skipsAllowed;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) bool useDarkBoot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAutoUpdateEnabled:(bool)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setDarkBoolEnabled:(bool)arg1;
- (void)_setType:(unsigned long long)arg1;
- (bool)autoUpdateEnabled;
- (id)clientName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstallPolicyType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setSkipsAllowed:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)skipsAllowed;
- (unsigned long long)type;
- (bool)useDarkBoot;

@end
