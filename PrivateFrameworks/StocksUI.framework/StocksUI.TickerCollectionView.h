
@interface StocksUI.TickerCollectionView : UICollectionView {
    void $__lazy_storage_$_delta;
    void autoScrolling;
    void displayLink;
    void minimumScrollDelta;
    void preferredFrameRate;
    void tickerCollectionModel;
}

- (void).cxx_destruct;
- (void)autoScrollWithDisplayWithDisplayLink:(id)arg1;
- (void)dealloc;
- (void)handleAccessibilitySettingsChangedWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;

@end
