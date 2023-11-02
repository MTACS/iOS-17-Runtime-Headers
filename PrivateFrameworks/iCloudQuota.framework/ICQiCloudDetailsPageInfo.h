
@interface ICQiCloudDetailsPageInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionType;
    NSURL * _actionURL;
}

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, readonly) ICQLink *icqLink;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionType;
- (id)actionURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icqLink;
- (id)initWithCoder:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setActionURL:(id)arg1;

@end
