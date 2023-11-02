
@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _canDecryptBAAEncryptedData;
    bool  _canMakeRemotePayments;
    bool  _hasRemoteDevices;
    bool  _hasSecureElement;
    bool  _inFailForward;
    bool  _isSRD;
    bool  _primaryUser;
    unsigned long long  _type;
}

@property (getter=_isDemoModeActive, nonatomic, readonly) bool _isDemoModeActive;
@property (nonatomic) bool canDecryptBAAEncryptedData;
@property (nonatomic, readonly) bool canMakeLocalPayments;
@property (nonatomic, readonly) bool canMakePayments;
@property (nonatomic) bool canMakeRemotePayments;
@property (nonatomic, readonly) bool canMakeVirtualCardPayments;
@property (nonatomic) bool hasRemoteDevices;
@property (nonatomic) bool hasSecureElement;
@property (getter=isInFailForward, nonatomic) bool inFailForward;
@property (nonatomic) bool isSRD;
@property (getter=isPrimaryUser, nonatomic) bool primaryUser;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (bool)_canMakeLocalPaymentsNeedingSecureIntent:(bool)arg1;
- (bool)_isDemoModeActive;
- (bool)canDecryptBAAEncryptedData;
- (bool)canMakeLocalPayments;
- (bool)canMakePayments;
- (bool)canMakeRemotePayments;
- (bool)canMakeVirtualCardPayments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRemoteDevices;
- (bool)hasSecureElement;
- (id)initWithCoder:(id)arg1;
- (bool)isInFailForward;
- (bool)isPrimaryUser;
- (bool)isSRD;
- (void)setCanDecryptBAAEncryptedData:(bool)arg1;
- (void)setCanMakeRemotePayments:(bool)arg1;
- (void)setHasRemoteDevices:(bool)arg1;
- (void)setHasSecureElement:(bool)arg1;
- (void)setInFailForward:(bool)arg1;
- (void)setIsSRD:(bool)arg1;
- (void)setPrimaryUser:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
