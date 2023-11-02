
@interface _UICollectionViewListCellReorderControl : UIControl <UIGestureRecognizerDelegate> {
    UIColor * _accessoryTintColor;
    <UITableConstants> * _constants;
    <_UICollectionViewListCellReorderControlDelegate> * _delegate;
    UIImageView * _imageView;
    bool  _needsImageViewUpdate;
    UILongPressGestureRecognizer * _reorderRecognizer;
    bool  _tracking;
}

@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, retain) <UITableConstants> *constants;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICollectionViewListCellReorderControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_minimumSizeForHitTesting;
- (void)_setNeedsImageViewUpdate;
- (void)_setTracking:(bool)arg1;
- (void)_updateImageViewIfNeeded;
- (id)accessoryTintColor;
- (void)beginReordering;
- (id)constants;
- (id)delegate;
- (void)endReordering:(bool)arg1;
- (void)gestureMovedToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithDelegate:(id)arg1 constants:(id)arg2;
- (void)layoutSubviews;
- (void)pan:(id)arg1;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setConstants:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
