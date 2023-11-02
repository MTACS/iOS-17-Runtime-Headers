
@interface BCSCallToActionItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _body;
    bool  _isDefault;
    NSString * _language;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) bool isDefault;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallToAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 language:(id)arg3 body:(id)arg4 isDefault:(bool)arg5;
- (bool)isDefault;
- (id)language;
- (id)subtitle;
- (id)title;

@end
