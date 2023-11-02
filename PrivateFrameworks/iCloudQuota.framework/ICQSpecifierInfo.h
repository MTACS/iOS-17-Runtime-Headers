
@interface ICQSpecifierInfo : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _actionURL;
    NSArray * _actions;
    ICQImageURL * _iconURL;
    ICQLink * _icqLink;
    NSString * _identifier;
    NSString * _subTitle;
    NSString * _title;
    NSString * _type;
}

@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) ICQImageURL *iconURL;
@property (nonatomic, retain) ICQLink *icqLink;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionURL;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconURL;
- (id)icqLink;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIcqLink:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)subTitle;
- (id)title;
- (id)type;

@end
