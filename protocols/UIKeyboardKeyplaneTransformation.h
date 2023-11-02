
@protocol UIKeyboardKeyplaneTransformation <NSObject>

@required

+ (UIKBTree *)transformKeyplane:(UIKBTree *)arg1 withTransformationContext:(UIKBKeyplaneTransformationContext *)arg2;
+ (NSString *)transformationIdentifier;

@optional

+ (UIKBTree *)rollbackKeyplane:(UIKBTree *)arg1 withTransformationContext:(UIKBKeyplaneTransformationContext *)arg2;

@end
