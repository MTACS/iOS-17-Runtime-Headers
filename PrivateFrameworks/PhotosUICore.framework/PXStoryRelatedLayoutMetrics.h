
@interface PXStoryRelatedLayoutMetrics : PXLayoutMetrics {
    double  _interitemSpacing;
    long long  _layoutMode;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    double  _offscreenFraction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollOffset;
    unsigned long long  _userInterfaceDirection;
}

@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic) double offscreenFraction;
@property (nonatomic) struct CGPoint { double x1; double x2; } scrollOffset;
@property (nonatomic) unsigned long long userInterfaceDirection;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (double)interitemSpacing;
- (bool)isEqual:(id)arg1;
- (long long)layoutMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (double)offscreenFraction;
- (struct CGPoint { double x1; double x2; })scrollOffset;
- (void)setInteritemSpacing:(double)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOffscreenFraction:(double)arg1;
- (void)setScrollOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUserInterfaceDirection:(unsigned long long)arg1;
- (unsigned long long)userInterfaceDirection;

@end
