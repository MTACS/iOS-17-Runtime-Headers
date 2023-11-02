
@interface ICQTipInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    NSString * _anchor;
    NSURL * _dismissURL;
    ICQTipIcon * _icon;
    NSString * _id;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) NSString *anchor;
@property (nonatomic, retain) NSURL *dismissURL;
@property (nonatomic, retain) ICQTipIcon *icon;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_parseTipIcon:(id)arg1;
- (id)actions;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dismissURL;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)id;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAnchor:(id)arg1;
- (void)setDismissURL:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setId:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
