
@interface TFFeedbackFormImageCollectionCell : TFFeedbackFormBaseCell <UITextFieldDelegate> {
    TFFeedbackEntryImageCollection * _imageCollectionEntry;
    NSMutableArray * _imageViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TFFeedbackEntryImageCollection *imageCollectionEntry;
@property (nonatomic, readonly) NSMutableArray *imageViews;
@property (readonly) Class superclass;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageViewInsetsInTraitEnvironment:(id)arg1;
+ (struct CGSize { double x1; double x2; })_sizeForImage:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct CGSize { double x1; double x2; })_sizeForImages:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 inTraitEnvironment:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3 inTraitEnvironment:(id)arg4;

- (void).cxx_destruct;
- (id)_createImageView;
- (void)_setupImagesViewsForImages:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (unsigned long long)displayableDataType;
- (id)imageCollectionEntry;
- (id)imageViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDisplayedDataImageCollection:(id)arg1;
- (void)setImageCollectionEntry:(id)arg1;

@end
