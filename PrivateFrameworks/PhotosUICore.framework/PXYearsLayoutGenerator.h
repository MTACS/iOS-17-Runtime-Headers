
@interface PXYearsLayoutGenerator : PXCachingLayoutGenerator {
    long long  _presentedNumberOfColumns;
}

@property (nonatomic, readonly) long long presentedNumberOfColumns;

- (long long)presentedNumberOfColumns;
- (void)updateContentSize:(out struct CGSize { double x1; double x2; }*)arg1 itemRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;

@end
