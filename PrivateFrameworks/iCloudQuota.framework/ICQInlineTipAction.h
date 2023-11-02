
@interface ICQInlineTipAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionName;
    NSURL * _actionURL;
    NSString * _buttonTitle;
    ICQLink * _link;
}

@property (nonatomic, copy) NSString *actionName;
@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, retain) ICQLink *link;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionName;
- (id)actionURL;
- (id)buttonTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)link;
- (void)setActionName:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setLink:(id)arg1;

@end
