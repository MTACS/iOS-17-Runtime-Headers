
@interface MEDecodedMessageBanner : NSObject <NSCopying, NSSecureCoding> {
    bool  _dismissable;
    NSString * _primaryActionTitle;
    NSString * _title;
}

@property (getter=isDismissable, nonatomic, readonly) bool dismissable;
@property (nonatomic, readonly) NSString *primaryActionTitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 primaryActionTitle:(id)arg2 dismissable:(bool)arg3;
- (bool)isDismissable;
- (bool)isEqual:(id)arg1;
- (id)primaryActionTitle;
- (id)title;

@end
