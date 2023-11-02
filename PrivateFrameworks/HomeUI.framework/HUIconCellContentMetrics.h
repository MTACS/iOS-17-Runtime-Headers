
@interface HUIconCellContentMetrics : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;

+ (id)compactMetrics;
+ (id)defaultMetrics;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGSize { double x1; double x2; })iconSize;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;

@end
