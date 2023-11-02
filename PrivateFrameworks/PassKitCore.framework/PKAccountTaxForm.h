
@interface PKAccountTaxForm : NSObject <NSSecureCoding> {
    NSDate * _closingDate;
    NSString * _identifier;
    NSDate * _openingDate;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSDate *closingDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *openingDate;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)closingDate;
- (id)description;
- (id)displayableTaxFormString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)openingDate;
- (void)setClosingDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOpeningDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
