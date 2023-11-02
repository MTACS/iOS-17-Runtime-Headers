
@interface _UIPopoverHostManagerPopoverUpdateConfiguration : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _isRTL;
    long long  _preferredHorizontalAlignment;
    bool  _showsArrow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRectInParentUIWindow;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) bool isRTL;
@property (nonatomic) long long preferredHorizontalAlignment;
@property (nonatomic) bool showsArrow;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRectInParentUIWindow;

- (struct CGSize { double x1; double x2; })contentSize;
- (bool)isRTL;
- (long long)preferredHorizontalAlignment;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setPreferredHorizontalAlignment:(long long)arg1;
- (void)setShowsArrow:(bool)arg1;
- (void)setSourceRectInParentUIWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showsArrow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRectInParentUIWindow;

@end
