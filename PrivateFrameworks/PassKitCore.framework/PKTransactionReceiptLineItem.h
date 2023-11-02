
@interface PKTransactionReceiptLineItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _adamIdentifier;
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    NSURL * _iconImageURL;
    NSString * _identifier;
    PKImage * _image;
    unsigned long long  _quantity;
    NSString * _secondarySubtitle;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) unsigned long long adamIdentifier;
@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, retain) NSURL *iconImageURL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) PKImage *image;
@property (nonatomic) unsigned long long quantity;
@property (nonatomic, copy) NSString *secondarySubtitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)adamIdentifier;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iconImageURL;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransactionReceiptLineItem:(id)arg1;
- (unsigned long long)quantity;
- (id)secondarySubtitle;
- (void)setAdamIdentifier:(unsigned long long)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setIconImageURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setQuantity:(unsigned long long)arg1;
- (void)setSecondarySubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
