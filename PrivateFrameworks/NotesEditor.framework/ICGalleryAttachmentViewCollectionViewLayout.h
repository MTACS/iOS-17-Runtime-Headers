
@interface ICGalleryAttachmentViewCollectionViewLayout : UICollectionViewFlowLayout {
    ICAttachmentGalleryModel * _attachmentModel;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedContentSize;
    NSArray * _itemAttributes;
    double  _itemHeight;
    double  _itemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _margins;
}

@property (nonatomic, retain) ICAttachmentGalleryModel *attachmentModel;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedContentSize;
@property (nonatomic, copy) NSArray *itemAttributes;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } margins;

+ (double)contentWidthForAttachmentGalleryModel:(id)arg1 itemHeight:(double)arg2 itemSpacing:(double)arg3;

- (void).cxx_destruct;
- (id)attachmentModel;
- (struct CGSize { double x1; double x2; })cachedContentSize;
- (id)initWithAttachmentGalleryModel:(id)arg1 itemHeight:(double)arg2 itemSpacing:(double)arg3 margins:(struct CGSize { double x1; double x2; })arg4;
- (void)invalidateLayoutWithNewItemHeight:(double)arg1;
- (id)itemAttributes;
- (double)itemHeight;
- (double)itemSpacing;
- (struct CGSize { double x1; double x2; })margins;
- (void)setAttachmentModel:(id)arg1;
- (void)setCachedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemAttributes:(id)arg1;
- (void)setItemHeight:(double)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setMargins:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
