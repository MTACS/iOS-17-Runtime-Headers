
@interface FMDActivationLockInfo : NSObject <NSSecureCoding> {
    bool  _isActivationLocked;
    bool  _isFindMyLPEMEnabled;
    bool  _isOfflineFindingEnabled;
    bool  _isRestrictedSKU;
    NSDictionary * _localeStrings;
    NSString * _maskedAppleID;
    NSString * _maskedOrganizationID;
    NSString * _title;
}

@property (nonatomic) bool isActivationLocked;
@property (nonatomic) bool isFindMyLPEMEnabled;
@property (nonatomic) bool isOfflineFindingEnabled;
@property (nonatomic) bool isRestrictedSKU;
@property (nonatomic, retain) NSDictionary *localeStrings;
@property (nonatomic, retain) NSString *maskedAppleID;
@property (nonatomic, retain) NSString *maskedOrganizationID;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isActivationLocked;
- (bool)isFindMyLPEMEnabled;
- (bool)isOfflineFindingEnabled;
- (bool)isRestrictedSKU;
- (id)localeStrings;
- (id)maskedAppleID;
- (id)maskedOrganizationID;
- (void)setIsActivationLocked:(bool)arg1;
- (void)setIsFindMyLPEMEnabled:(bool)arg1;
- (void)setIsOfflineFindingEnabled:(bool)arg1;
- (void)setIsRestrictedSKU:(bool)arg1;
- (void)setLocaleStrings:(id)arg1;
- (void)setMaskedAppleID:(id)arg1;
- (void)setMaskedOrganizationID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
