
@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager {
    NSAttributedString * _bullet;
    struct CGSize { 
        double width; 
        double height; 
    }  _bulletSize;
}

@property (nonatomic, copy) NSAttributedString *bullet;

- (void).cxx_destruct;
- (id)bullet;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setBullet:(id)arg1;

@end
