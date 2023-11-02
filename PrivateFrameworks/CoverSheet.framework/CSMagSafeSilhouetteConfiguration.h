
@interface CSMagSafeSilhouetteConfiguration : NSObject {
    double  _bottomOffset;
    double  _cornerRadius;
    unsigned long long  _roundedCorners;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) double bottomOffset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long roundedCorners;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (double)bottomOffset;
- (double)cornerRadius;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 bottomOffset:(double)arg2 cornerRadius:(double)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 bottomOffset:(double)arg2 cornerRadius:(double)arg3 roundedCorners:(unsigned long long)arg4;
- (unsigned long long)roundedCorners;
- (unsigned long long)roundedCornersMaskForOrientation:(long long)arg1;
- (void)setBottomOffset:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setRoundedCorners:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
