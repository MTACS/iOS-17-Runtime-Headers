
@interface PXTCCPhotoGridView : UIView {
    NSMutableArray * _imageViews;
    long long  _totalColumns;
    long long  _totalRows;
}

@property (nonatomic, readonly) NSMutableArray *imageViews;
@property (nonatomic) long long totalColumns;
@property (nonatomic) long long totalRows;

+ (id)photoGridViewForAlertPromptWithWidth:(double)arg1;
+ (id)photoGridViewForSettings;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutItemsAndCalculateTotalSizeForTargetWidth:(double)arg1;
- (void)_setUpViewsWithImages:(id)arg1 maximumItemCount:(long long)arg2;
- (id)imageViews;
- (id)initWithColumns:(long long)arg1 proposedRows:(long long)arg2 width:(double)arg3;
- (void)layoutSubviews;
- (void)setTotalColumns:(long long)arg1;
- (void)setTotalRows:(long long)arg1;
- (long long)totalColumns;
- (long long)totalRows;

@end
