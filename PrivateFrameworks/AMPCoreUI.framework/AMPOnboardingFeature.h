
@interface AMPOnboardingFeature : NSObject {
    NSString * _descriptionText;
    UIImage * _image;
    NSString * _titleText;
}

@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *titleText;

- (void).cxx_destruct;
- (id)descriptionText;
- (id)image;
- (id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3;
- (id)titleText;

@end
