
@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _SSID;
    NSString * _SSIDPrefix;
    NEHotspotEAPSettings * _eapSettings;
    bool  _hidden;
    NEHotspotHS20Settings * _hs20Settings;
    bool  _joinOnce;
    NSNumber * _lifeTimeInDays;
    NSString * _passphrase;
    long long  _securityType;
    bool  _useSSIDPrefix;
}

@property (readonly) NSString *SSID;
@property (readonly) NSString *SSIDPrefix;
@property (copy) NEHotspotEAPSettings *eapSettings;
@property bool hidden;
@property (copy) NEHotspotHS20Settings *hs20Settings;
@property bool joinOnce;
@property (copy) NSNumber *lifeTimeInDays;
@property (copy) NSString *passphrase;
@property long long securityType;
@property bool useSSIDPrefix;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SSID;
- (id)SSIDPrefix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eapSettings;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidden;
- (id)hs20Settings;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHS20Settings:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1;
- (id)initWithSSID:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1 passphrase:(id)arg2 isWEP:(bool)arg3;
- (id)initWithSSIDPrefix:(id)arg1;
- (id)initWithSSIDPrefix:(id)arg1 passphrase:(id)arg2 isWEP:(bool)arg3;
- (bool)joinOnce;
- (id)lifeTimeInDays;
- (id)passphrase;
- (long long)securityType;
- (void)setEapSettings:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHs20Settings:(id)arg1;
- (void)setJoinOnce:(bool)arg1;
- (void)setLifeTimeInDays:(id)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setSecurityType:(long long)arg1;
- (void)setUseSSIDPrefix:(bool)arg1;
- (bool)useSSIDPrefix;
- (long long)validate;

@end
