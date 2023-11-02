
@interface ASVBadgeDescription : NSObject {
    UIImage * _badgeImage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _badgeOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _badgeSize;
    unsigned long long  _badgeSizeClass;
    double  _shadowSize;
}

@property (readonly) UIImage *badgeImage;
@property (readonly) struct CGPoint { double x1; double x2; } badgeOffset;
@property (readonly) struct CGSize { double x1; double x2; } badgeSize;
@property (readonly) unsigned long long badgeSizeClass;
@property (readonly) double shadowSize;

+ (id)descriptionForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)badgeImage;
- (struct CGPoint { double x1; double x2; })badgeOffset;
- (struct CGSize { double x1; double x2; })badgeSize;
- (unsigned long long)badgeSizeClass;
- (id)initWithSizeClass:(unsigned long long)arg1;
- (double)shadowSize;

@end
