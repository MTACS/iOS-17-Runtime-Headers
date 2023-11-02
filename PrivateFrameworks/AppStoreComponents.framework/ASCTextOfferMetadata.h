
@interface ASCTextOfferMetadata : ASCOfferMetadata {
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isText;
- (id)subtitle;
- (id)title;

@end
