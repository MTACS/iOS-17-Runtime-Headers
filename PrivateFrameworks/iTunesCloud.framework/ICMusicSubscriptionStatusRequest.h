
@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsFallbackToExpiredStatus;
    bool  _allowsFallbackToStatusNeedingReload;
    long long  _carrierBundleProvisioningStyle;
    long long  _reason;
    NSUUID * _requestIdentifier;
    bool  _shouldBypassEnforcementOfPrivacyAcknowledgement;
    bool  _shouldIgnoreCache;
    bool  _shouldReturnLastKnownStatusOnly;
    ICStoreRequestContext * _storeRequestContext;
}

@property (nonatomic) bool allowsFallbackToExpiredStatus;
@property (nonatomic) bool allowsFallbackToStatusNeedingReload;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (nonatomic) long long reason;
@property (nonatomic, readonly) NSUUID *requestIdentifier;
@property (nonatomic) bool shouldBypassEnforcementOfPrivacyAcknowledgement;
@property (nonatomic) bool shouldIgnoreCache;
@property (nonatomic) bool shouldReturnLastKnownStatusOnly;
@property (nonatomic, copy) ICStoreRequestContext *storeRequestContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsFallbackToExpiredStatus;
- (bool)allowsFallbackToStatusNeedingReload;
- (long long)carrierBundleProvisioningStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreRequestContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)reason;
- (id)requestIdentifier;
- (void)setAllowsFallbackToExpiredStatus:(bool)arg1;
- (void)setAllowsFallbackToStatusNeedingReload:(bool)arg1;
- (void)setCarrierBundleProvisioningStyle:(long long)arg1;
- (void)setReason:(long long)arg1;
- (void)setShouldBypassEnforcementOfPrivacyAcknowledgement:(bool)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (void)setShouldReturnLastKnownStatusOnly:(bool)arg1;
- (void)setStoreRequestContext:(id)arg1;
- (bool)shouldBypassEnforcementOfPrivacyAcknowledgement;
- (bool)shouldIgnoreCache;
- (bool)shouldReturnLastKnownStatusOnly;
- (id)storeRequestContext;

@end
