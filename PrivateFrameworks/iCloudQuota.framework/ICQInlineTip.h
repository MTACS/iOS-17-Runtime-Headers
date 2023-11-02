
@interface ICQInlineTip : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    NSString * _anchor;
    NSString * _arrowConfiguration;
    ICQTipCriteria * _criteria;
    NSURL * _dismissURL;
    NSURL * _displayURL;
    ICQTipIcon * _icon;
    NSString * _id;
    NSString * _subTitle;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) NSString *anchor;
@property (nonatomic, copy) NSString *arrowConfiguration;
@property (nonatomic, retain) ICQTipCriteria *criteria;
@property (nonatomic, retain) NSURL *dismissURL;
@property (nonatomic, retain) NSURL *displayURL;
@property (nonatomic, retain) ICQTipIcon *icon;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *title;

+ (id)downwardArrowConfigurationStrings;
+ (bool)supportsSecureCoding;
+ (id)upwardArrowConfigurationStrings;

- (void).cxx_destruct;
- (id)actions;
- (id)anchor;
- (id)arrowConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)description;
- (id)dismissURL;
- (id)displayURL;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAnchor:(id)arg1;
- (void)setArrowConfiguration:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setDismissURL:(id)arg1;
- (void)setDisplayURL:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setId:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (id)title;

@end
