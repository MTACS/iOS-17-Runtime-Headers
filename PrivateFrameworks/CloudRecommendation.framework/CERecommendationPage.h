
@interface CERecommendationPage : NSObject <NSCopying, NSSecureCoding> {
    CEImageIcon * _icon;
    NSString * _subTitle;
    NSString * _title;
}

@property (nonatomic, retain) CEImageIcon *icon;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (id)title;

@end
