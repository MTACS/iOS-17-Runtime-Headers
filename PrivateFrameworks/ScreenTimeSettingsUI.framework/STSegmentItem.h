
@interface STSegmentItem : NSObject {
    NSString * _accessibilityText;
    UIImage * _detailImage;
    UIColor * _detailImageTintColor;
    NSString * _detailText;
    UIColor * _titleColor;
    NSString * _titleText;
}

@property (copy) NSString *accessibilityText;
@property (nonatomic, readonly) UIImage *detailImage;
@property (readonly, copy) UIColor *detailImageTintColor;
@property (nonatomic, readonly, copy) NSString *detailText;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)accessibilityText;
- (id)detailImage;
- (id)detailImageTintColor;
- (id)detailText;
- (unsigned long long)hash;
- (id)initWithTitleText:(id)arg1 detailText:(id)arg2 titleColor:(id)arg3 detailImage:(id)arg4 detailImageTintColor:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)setAccessibilityText:(id)arg1;
- (id)titleColor;
- (id)titleText;

@end
