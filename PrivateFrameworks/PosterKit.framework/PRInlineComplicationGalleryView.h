
@interface PRInlineComplicationGalleryView : UIView <UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    <PRInlineComplicationGalleryViewDelegate> * _delegate;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRInlineComplicationGalleryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_makeLayout;
- (id)collectionView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
