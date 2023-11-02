
@interface PXMonthsLayoutGenerator : PXCachingLayoutGenerator {
    bool  _presentedSingleColumn;
}

@property (nonatomic, readonly) bool presentedSingleColumn;

- (bool)presentedSingleColumn;
- (void)updateContentSize:(out struct CGSize { double x1; double x2; }*)arg1 itemRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 itemKinds:(out long long*)arg3 zPositions:(out float*)arg4;

@end
