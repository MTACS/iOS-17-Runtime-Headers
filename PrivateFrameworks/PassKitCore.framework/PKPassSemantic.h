
@interface PKPassSemantic : NSObject <NSSecureCoding> {
    PKCurrencyAmount * _currencyAmountValue;
    NSDate * _dateValue;
    NSArray * _dictionariesValue;
    NSString * _fieldKey;
    PKLocation * _locationValue;
    NSNumber * _numberValue;
    NSPersonNameComponents * _personNameComponentsValue;
    NSString * _semanticKey;
    NSString * _stringValue;
    NSArray * _stringsValue;
}

@property (nonatomic, retain) PKCurrencyAmount *currencyAmountValue;
@property (nonatomic, retain) NSDate *dateValue;
@property (nonatomic, retain) NSArray *dictionariesValue;
@property (nonatomic, copy) NSString *fieldKey;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) PKLocation *locationValue;
@property (nonatomic, retain) NSNumber *numberValue;
@property (nonatomic, retain) NSPersonNameComponents *personNameComponentsValue;
@property (nonatomic, copy) NSString *semanticKey;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, retain) NSArray *stringsValue;

+ (id)_supportedDictionaryValueTypes;
+ (bool)isSupportedDictionaryKeyType:(id)arg1;
+ (bool)isSupportedDictionaryValueType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currencyAmountValue;
- (id)dateValue;
- (id)description;
- (id)dictionariesValue;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldKey;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locationValue;
- (id)numberValue;
- (id)personNameComponentsValue;
- (id)semanticKey;
- (void)setCurrencyAmountValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDictionariesValue:(id)arg1;
- (void)setFieldKey:(id)arg1;
- (void)setLocationValue:(id)arg1;
- (void)setNumberValue:(id)arg1;
- (void)setPersonNameComponentsValue:(id)arg1;
- (void)setSemanticKey:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setStringsValue:(id)arg1;
- (id)stringValue;
- (id)stringsValue;

@end
