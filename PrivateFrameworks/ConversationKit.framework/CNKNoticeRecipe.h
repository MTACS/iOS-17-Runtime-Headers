
@interface CNKNoticeRecipe : NSObject <NSSecureCoding> {
    UIImage * _image;
    NSString * _primaryActionTitle;
    NSString * _secondaryActionTitle;
    NSString * _subtitle;
    NSString * _title;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *primaryActionTitle;
@property (nonatomic, readonly, copy) NSString *secondaryActionTitle;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 primaryActionTitle:(id)arg4 secondaryActionTitle:(id)arg5;
- (id)primaryActionTitle;
- (id)secondaryActionTitle;
- (id)subtitle;
- (id)title;
- (id)uuid;

@end
