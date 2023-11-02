
@interface PKAccountHold : NSObject <NSSecureCoding, PKRecordObject> {
    PKCurrencyAmount * _currencyAmount;
    NSString * _identifier;
    unsigned long long  _state;
    unsigned long long  _type;
}

@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currencyAmount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)type;

@end
