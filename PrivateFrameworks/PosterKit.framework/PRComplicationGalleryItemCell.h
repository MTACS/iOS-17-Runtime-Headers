
@interface PRComplicationGalleryItemCell : UICollectionViewCell {
    PRComplicationGalleryItemView * _itemView;
}

@property (nonatomic, readonly) PRComplicationGalleryItemView *itemView;

- (void).cxx_destruct;
- (bool)_descendantsShouldHighlight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemView;

@end
