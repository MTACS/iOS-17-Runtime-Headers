
@interface PKPassAuxiliaryPassInformationItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _detailFooterLeadingText;
    NSString * _detailFooterLeadingTitle;
    NSString * _detailFooterTrailingText;
    NSString * _detailFooterTrailingTitle;
    NSArray * _fields;
    NSString * _identifier;
    NSURL * _mapsURL;
    PKMerchant * _merchant;
    long long  _merchantCategory;
    NSArray * _sections;
    NSString * _subtitle;
    NSString * _subtitle2;
    NSString * _title;
}

@property (nonatomic, copy) NSString *detailFooterLeadingText;
@property (nonatomic, copy) NSString *detailFooterLeadingTitle;
@property (nonatomic, copy) NSString *detailFooterTrailingText;
@property (nonatomic, copy) NSString *detailFooterTrailingTitle;
@property (nonatomic, retain) NSArray *fields;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSURL *mapsURL;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic) long long merchantCategory;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitle2;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailFooterLeadingText;
- (id)detailFooterLeadingTitle;
- (id)detailFooterTrailingText;
- (id)detailFooterTrailingTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)fields;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemInformation:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 passType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)mapsURL;
- (id)merchant;
- (long long)merchantCategory;
- (id)sections;
- (void)setDetailFooterLeadingText:(id)arg1;
- (void)setDetailFooterLeadingTitle:(id)arg1;
- (void)setDetailFooterTrailingText:(id)arg1;
- (void)setDetailFooterTrailingTitle:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMapsURL:(id)arg1;
- (void)setMerchant:(id)arg1;
- (void)setMerchantCategory:(long long)arg1;
- (void)setSections:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)subtitle2;
- (id)title;

@end
