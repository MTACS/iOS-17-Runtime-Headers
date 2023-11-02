
@interface PKDiscoveryCard : NSObject <NSSecureCoding> {
    PKColor * _backgroundColor;
    PKDiscoveryMedia * _backgroundMedia;
    PKDiscoveryCallToAction * _callToAction;
    long long  _foregroundContentMode;
    NSString * _heading;
    NSString * _headingKey;
    NSString * _inlineDescription;
    NSString * _inlineDescriptionKey;
    PKDiscoveryItem * _item;
    NSString * _itemIdentifier;
    long long  _largeCardTemplateType;
    NSString * _title;
    NSString * _titleKey;
}

@property (nonatomic, readonly) PKColor *backgroundColor;
@property (nonatomic, readonly) PKDiscoveryMedia *backgroundMedia;
@property (nonatomic, readonly) PKDiscoveryCallToAction *callToAction;
@property (nonatomic, readonly) long long foregroundContentMode;
@property (nonatomic, retain) NSString *heading;
@property (nonatomic, readonly) NSString *headingKey;
@property (nonatomic, readonly) NSString *inlineDescription;
@property (nonatomic, readonly) NSString *inlineDescriptionKey;
@property (nonatomic) PKDiscoveryItem *item;
@property (nonatomic, readonly) long long largeCardTemplateType;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *titleKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundMedia;
- (id)callToAction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)foregroundContentMode;
- (unsigned long long)hash;
- (id)heading;
- (id)headingKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)inlineDescription;
- (id)inlineDescriptionKey;
- (bool)isEqual:(id)arg1;
- (id)item;
- (long long)largeCardTemplateType;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)setHeading:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleKey;

@end
