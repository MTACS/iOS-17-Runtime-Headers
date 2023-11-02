
@interface HROnboardingBulletPoint : NSObject {
    NSString * _bulletBodyString;
    UIImage * _bulletImage;
    NSString * _bulletTitleString;
}

@property (nonatomic, readonly) NSString *bulletBodyString;
@property (nonatomic, readonly) UIImage *bulletImage;
@property (nonatomic, readonly) NSString *bulletTitleString;

+ (id)bulletPointWithImage:(id)arg1 title:(id)arg2 body:(id)arg3;

- (void).cxx_destruct;
- (id)bulletBodyString;
- (id)bulletImage;
- (id)bulletTitleString;
- (id)initWithImage:(id)arg1 title:(id)arg2 body:(id)arg3;

@end
