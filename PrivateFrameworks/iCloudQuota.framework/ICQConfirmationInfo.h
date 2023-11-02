
@interface ICQConfirmationInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    ICQImageURL * _iconURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) ICQImageURL *iconURL;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconURL;
- (id)initFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
