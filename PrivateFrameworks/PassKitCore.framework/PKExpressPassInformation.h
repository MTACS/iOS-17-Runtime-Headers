
@interface PKExpressPassInformation : NSObject <NSSecureCoding> {
    long long  _cardType;
    NSDictionary * _configuration;
    bool  _forceModernEncoding;
    NSString * _passUniqueIdentifier;
    bool  _userChoice;
    NSString * _v0_expressMode;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic) bool forceModernEncoding;
@property (nonatomic, readonly) NSString *passUniqueIdentifier;
@property (nonatomic, readonly) NSDictionary *subcredentialCredentialIdentifiers;
@property (getter=isUserChoice, nonatomic, readonly) bool userChoice;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (bool)extractApplicationIdentifier:(id*)arg1 subcredentialIdentifier:(id*)arg2 fromIdentifiers:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initForPaymentPass:(id)arg1 configuration:(id)arg2;
- (long long)cardType;
- (id)criteriaForApplication:(id)arg1;
- (id)criteriaForPaymentApplicationIdentifier:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCredentialsWithHandler:(id /* block */)arg1;
- (void)enumerateCriteriaWithHandler:(id /* block */)arg1;
- (id)expressMode;
- (bool)forceModernEncoding;
- (bool)getAppletIdentifiers:(id)arg1 appletsToKeys:(id)arg2 includeKeyContainerAsApplet:(bool)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)arg1 paymentPass:(id)arg2 withTechologyTest:(id /* block */)arg3;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (id)initForPaymentPass:(id)arg1 withTechologyTest:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUserChoice;
- (id)passUniqueIdentifier;
- (id)paymentApplicationIdentifier;
- (id)paymentApplicationIdentifiers;
- (void)setForceModernEncoding:(bool)arg1;
- (id)subcredentialCredentialIdentifiers;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (void)npk_getAppletIdentifiers:(id)arg1 appletsToKeys:(id)arg2 includeKeyContainerAsApplet:(bool)arg3;
- (bool)npk_hasImmediateAutomaticSelectionCriterion;

@end
