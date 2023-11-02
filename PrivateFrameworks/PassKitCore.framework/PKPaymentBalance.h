
@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _componentBalances;
    NSString * _currencyCode;
    long long  _exponent;
    NSSet * _identifiers;
    bool  _isPrimary;
    NSDate * _lastUpdateDate;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSString * _preformattedString;
    NSDecimalNumber * _value;
}

@property (nonatomic, copy) NSArray *componentBalances;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, readonly) PKCurrencyAmount *currencyValue;
@property (nonatomic) long long exponent;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, copy) NSSet *identifiers;
@property (nonatomic, readonly) bool isCurrency;
@property (nonatomic) bool isPrimary;
@property (nonatomic, copy) NSDate *lastUpdateDate;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *preformattedString;
@property (nonatomic, copy) NSDecimalNumber *value;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)identifiersFromComponentBalances:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setValueWithRounding:(id)arg1;
- (id)componentBalances;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currencyValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)exponent;
- (id)formattedValue;
- (unsigned long long)hash;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentBalances:(id)arg1;
- (id)initWithComponentBalances:(id)arg1 identifiers:(id)arg2;
- (id)initWithComponentBalances:(id)arg1 identifiers:(id)arg2 expiredBalances:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2;
- (id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3;
- (id)initWithIdentifiers:(id)arg1 forCurrencyAmount:(id)arg2;
- (id)initWithIdentifiers:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3;
- (bool)isComposed;
- (bool)isCurrency;
- (bool)isEqual:(id)arg1;
- (bool)isPrimary;
- (id)lastUpdateDate;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)preformattedString;
- (void)setComponentBalances:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setExponent:(long long)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setIsPrimary:(bool)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPreformattedString:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

+ (id)NPK_paymentBalanceWithAppletBalance:(id)arg1;

@end
