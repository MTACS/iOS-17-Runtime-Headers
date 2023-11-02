
@interface GKButtonStyle : NSObject {
    UIColor * _backgroundColor;
    bool  _clipToBounds;
    id  _compositingFilter;
    double  _cornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleEdgeInsets;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool clipToBounds;
@property (nonatomic) id compositingFilter;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleEdgeInsets;

+ (id)defaultStyle;
+ (id)standardStyle;

- (void).cxx_destruct;
- (void)applyToButton:(id)arg1;
- (id)backgroundColor;
- (bool)clipToBounds;
- (id)compositingFilter;
- (double)cornerRadius;
- (id)initWithCornerRadius:(double)arg1 andBackgroundColor:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setClipToBounds:(bool)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleEdgeInsets;

@end
