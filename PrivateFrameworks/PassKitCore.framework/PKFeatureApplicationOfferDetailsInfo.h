
@interface PKFeatureApplicationOfferDetailsInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _body;
    NSString * _disclosureTitle;
    NSString * _heroImageURL;
    unsigned long long  _layout;
    NSString * _primaryActionTitle;
    NSString * _secondaryActionTitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *disclosureTitle;
@property (nonatomic, copy) NSString *heroImageURL;
@property (nonatomic) unsigned long long layout;
@property (nonatomic, copy) NSString *primaryActionTitle;
@property (nonatomic, copy) NSString *secondaryActionTitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disclosureTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)heroImageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)layout;
- (id)primaryActionTitle;
- (id)secondaryActionTitle;
- (void)setBody:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setHeroImageURL:(id)arg1;
- (void)setLayout:(unsigned long long)arg1;
- (void)setPrimaryActionTitle:(id)arg1;
- (void)setSecondaryActionTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
