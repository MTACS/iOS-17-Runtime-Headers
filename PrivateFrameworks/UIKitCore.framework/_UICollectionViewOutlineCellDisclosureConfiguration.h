
@interface _UICollectionViewOutlineCellDisclosureConfiguration : NSObject <NSCopying> {
    long long  _alignment;
    double  _animationRotationAngle;
    UIColor * _disclosureColor;
    id /* block */  _disclosureWasTappedHandler;
    UIImage * _image;
}

@property (nonatomic) long long alignment;
@property (nonatomic) double animationRotationAngle;
@property (nonatomic, retain) UIColor *disclosureColor;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (long long)alignment;
- (double)animationRotationAngle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disclosureColor;
- (id)image;
- (id)init;
- (id)initWithImage:(id)arg1 alignment:(long long)arg2;
- (id)initWithImage:(id)arg1 alignment:(long long)arg2 animationRotationAngle:(double)arg3 disclosureColor:(id)arg4 disclosureWasTappedHandler:(id /* block */)arg5;
- (void)setAlignment:(long long)arg1;
- (void)setAnimationRotationAngle:(double)arg1;
- (void)setDisclosureColor:(id)arg1;
- (void)setImage:(id)arg1;

@end
