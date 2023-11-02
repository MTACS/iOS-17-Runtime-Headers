
@protocol SiriSharedUIReusableView <NSObject>

@required

+ (double)defaultHeight;
+ (NSString *)elementKind;
+ (NSString *)reuseIdentifier;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;

@end
