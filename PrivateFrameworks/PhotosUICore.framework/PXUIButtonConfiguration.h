
@interface PXUIButtonConfiguration : NSObject {
    bool  _allowAnimatedHighlighting;
    long long  _cursorEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestOutset;
}

@property (nonatomic) bool allowAnimatedHighlighting;
@property (nonatomic) long long cursorEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestOutset;

+ (id)configurationWithCursorEffect:(long long)arg1;

- (bool)allowAnimatedHighlighting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestOutset;
- (id)init;
- (void)setAllowAnimatedHighlighting:(bool)arg1;
- (void)setCursorEffect:(long long)arg1;
- (void)setHitTestOutset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
