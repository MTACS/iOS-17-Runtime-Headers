
@interface WBSCreditCardData : NSObject <NSSecureCoding> {
    NSString * _cardName;
    NSString * _cardNumber;
    NSString * _cardSecurityCode;
    NSString * _cardholderName;
    NSDate * _expirationDate;
    NSDate * _lastUsedDate;
    bool  _promptToSaveSecurityCode;
    PKVirtualCard * _virtualCard;
}

@property (nonatomic, copy) NSString *cardName;
@property (nonatomic, copy) NSString *cardNumber;
@property (nonatomic, readonly, copy) NSString *cardSecurityCode;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool isCardFromWallet;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic) bool promptToSaveSecurityCode;
@property (readonly) bool shouldHide;
@property (nonatomic, readonly) PKVirtualCard *virtualCard;
@property (nonatomic, readonly) UIImage *virtualCardIcon;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_expirationDateFormatter;
- (id)_expirationDateFromPKVirtualCard:(id)arg1;
- (id)_expirationDateFromPKVirtualCardCredentials:(id)arg1;
- (id)cardName;
- (id)cardNumber;
- (id)cardSecurityCode;
- (id)cardholderName;
- (id)creditCardDataByMergingOtherAttributesBesidesCardNumberFromCard:(id)arg1 mergeSecurityCode:(bool)arg2;
- (id)creditCardDataByUpdatingLastUsedDate:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (bool)hasSameCreditCardInformationAs:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 securityCode:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeychainRepresentation:(id)arg1;
- (id)initWithVirtualCard:(id)arg1;
- (id)initWithVirtualCardCredentials:(id)arg1 virtualCard:(id)arg2;
- (bool)isCardFromWallet;
- (bool)isEqual:(id)arg1;
- (id)keychainRepresentationByMigratingExistingKeychainData:(id)arg1;
- (id)keychainRepresentationForNewCard;
- (id)lastUsedDate;
- (bool)promptToSaveSecurityCode;
- (void)setCardName:(id)arg1;
- (void)setCardNumber:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setPromptToSaveSecurityCode:(bool)arg1;
- (bool)shouldHide;
- (id)virtualCard;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (id)initWithCameraReaderOutput:(id)arg1;
- (void)virtualCardArtworkWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (id)virtualCardIcon;

@end
