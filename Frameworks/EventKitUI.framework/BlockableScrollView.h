
@interface BlockableScrollView : UIScrollView {
    NSObject<BlockableScrollViewDelegate> * _blockableDelegate;
    bool  _isResizing;
}

@property (nonatomic) NSObject<BlockableScrollViewDelegate> *blockableDelegate;
@property (nonatomic) bool isResizing;

- (void).cxx_destruct;
- (id)blockableDelegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)isResizing;
- (void)setBlockableDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsResizing:(bool)arg1;

@end
