
@interface KTSelfStatusResult : NSObject <NSSecureCoding> {
    unsigned long long  _accountStatus;
    unsigned long long  _optIn;
    NSArray * _selfDevices;
    unsigned long long  _selfStatus;
    unsigned long long  _systemStatus;
}

@property unsigned long long accountStatus;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property unsigned long long optIn;
@property (retain) NSArray *selfDevices;
@property unsigned long long selfStatus;
@property unsigned long long systemStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accountStatus;
- (id)description;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)optIn;
- (id)selfDevices;
- (unsigned long long)selfStatus;
- (void)setAccountStatus:(unsigned long long)arg1;
- (void)setOptIn:(unsigned long long)arg1;
- (void)setSelfDevices:(id)arg1;
- (void)setSelfStatus:(unsigned long long)arg1;
- (void)setSystemStatus:(unsigned long long)arg1;
- (id)simpleStatus;
- (unsigned long long)systemStatus;

@end
