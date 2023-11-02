
@interface PKVirtualCard : NSObject <NSCopying, NSSecureCoding> {
    NSString * _FPANSuffix;
    PKCurrencyAmount * _balance;
    CNContact * _billingAddress;
    NSString * _cardholderName;
    long long  _credentialType;
    NSString * _displayName;
    NSData * _encryptedData;
    NSData * _ephemeralPublicKey;
    NSString * _expiration;
    bool  _hasDynamicSecurityCode;
    NSString * _identifier;
    PKVirtualCardCredentials * _keychainCardCredentials;
    NSDate * _lastAutoFilledBySafari;
    NSDate * _lastUpdatedDate;
    NSString * _nameFromSafari;
    unsigned long long  _refreshType;
    bool  _requiresAuthentication;
    NSDate * _securityCodeExpiration;
    NSString * _securityCodeIdentifier;
    long long  _state;
    bool  _supportsLocalStorage;
    long long  _type;
}

@property (nonatomic, copy) NSString *FPANSuffix;
@property (nonatomic, copy) PKCurrencyAmount *balance;
@property (nonatomic, copy) CNContact *billingAddress;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic) long long credentialType;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSData *encryptedData;
@property (nonatomic, copy) NSData *ephemeralPublicKey;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic) bool hasDynamicSecurityCode;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) PKVirtualCardCredentials *keychainCardCredentials;
@property (nonatomic, copy) NSDate *lastAutoFilledBySafari;
@property (nonatomic, copy) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSString *nameFromSafari;
@property (nonatomic) unsigned long long refreshType;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic, copy) NSDate *securityCodeExpiration;
@property (nonatomic, copy) NSString *securityCodeIdentifier;
@property (nonatomic) long long state;
@property (nonatomic) bool supportsLocalStorage;
@property (nonatomic) long long type;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)cardsForPaymentPass:(id)arg1;
+ (id)cardsForPaymentPass:(id)arg1 accordingToWebService:(id)arg2;
+ (void)deleteAllLocalKeychainVirtualCards;
+ (id)demoVPANVirtualCards;
+ (void)queryKeychainForVirtualCards:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FPANSuffix;
- (id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)balance;
- (id)billingAddress;
- (id)cardholderName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)credentialType;
- (void)deleteKeychainVirtualCard;
- (void)deleteLocalKeychainVirtualCard;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (id)ephemeralPublicKey;
- (id)expiration;
- (id)generateHashWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2;
- (bool)hasDynamicSecurityCode;
- (bool)hasSensitiveCredentials;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKeychainData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSafariEntryWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2;
- (bool)isValidFromKeychain;
- (id)keychainCardCredentials;
- (id)keychainVirtualCard;
- (id)lastAutoFilledBySafari;
- (id)lastUpdatedDate;
- (id)mergeVirtualCardWith:(id)arg1;
- (id)nameFromSafari;
- (unsigned long long)refreshType;
- (bool)requiresAuthentication;
- (id)securityCodeExpiration;
- (id)securityCodeIdentifier;
- (void)setBalance:(id)arg1;
- (void)setBillingAddress:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setContactNameEnteredInSafari:(id)arg1 completion:(id /* block */)arg2;
- (void)setCredentialType:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setFPANSuffix:(id)arg1;
- (void)setHasDynamicSecurityCode:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeychainCardCredentials:(id)arg1;
- (void)setLastAutoFilledBySafari:(id)arg1;
- (void)setLastAutoFilledBySafariWithCompletion:(id /* block */)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setNameFromSafari:(id)arg1;
- (void)setRefreshType:(unsigned long long)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setSecurityCodeExpiration:(id)arg1;
- (void)setSecurityCodeIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsLocalStorage:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (bool)supportsLocalStorage;
- (long long)type;
- (void)writeKeychainVirtualCardToKeychain;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)_genericCardIcon;
- (id)_largeAppleCardIcon;
- (id)_smallAppleCardIcon;
- (void)cardArtworkWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation

- (id)cardIcon;

@end
