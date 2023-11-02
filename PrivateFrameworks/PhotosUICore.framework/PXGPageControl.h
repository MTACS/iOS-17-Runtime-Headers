
@interface PXGPageControl : UIView <PXGReusableView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    UIPageControl * _pageControl;
    PXGPageControlConfiguration * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic) long long currentPage;
@property (nonatomic) bool hidesForSinglePage;
@property (nonatomic) long long numberOfPages;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) PXGPageControlConfiguration *userData;

- (void).cxx_destruct;
- (void)_valueChanged:(id)arg1;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (long long)currentPage;
- (bool)hidesForSinglePage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfPages;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setHidesForSinglePage:(bool)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
