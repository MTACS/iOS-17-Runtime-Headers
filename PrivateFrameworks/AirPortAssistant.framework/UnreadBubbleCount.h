
@interface UnreadBubbleCount : UIView {
    long long  _count;
    bool  _isSelected;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
}

@property (nonatomic) long long count;
@property (nonatomic) bool isSelected;

+ (void)deallocImageCache;
+ (int)initImageCache;

- (void)calculateTextMetrics;
- (long long)count;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)setCount:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsSelected:(bool)arg1;

@end
