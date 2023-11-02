
@interface ICQActionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _actionURL;
    ICQConfirmationInfo * _confirmation;
    ICQLink * _icqLink;
    bool  _isDefault;
    bool  _isDestructive;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, retain) ICQConfirmationInfo *confirmation;
@property (nonatomic, retain) ICQLink *icqLink;
@property (nonatomic) bool isDefault;
@property (nonatomic) bool isDestructive;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionURL;
- (id)confirmation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icqLink;
- (id)initFromConfirmationAction:(id)arg1;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDefault;
- (bool)isDestructive;
- (void)setActionURL:(id)arg1;
- (void)setConfirmation:(id)arg1;
- (void)setIcqLink:(id)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setIsDestructive:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
