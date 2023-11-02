
@interface NTKCFaceDetailPigmentEditOptionCell : NTKCFaceDetailEditOptionCell <UICollectionViewDelegateFlowLayout, _NTKCFaceDetailPigmentAddCellDelegate> {
    NTKFaceEditColorPickerConfiguration * _configuration;
    UIImage * _dividerImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _dividerItemSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dividerSwatchRect;
    NTKPigmentEditOptionArray * _editingModifiedColors;
    UIImage * _plusImage;
    NTKPigmentEditOptionArray * _previouslySelectedColors;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailPigmentEditOptionCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configurationFromCollection:(id)arg1 selectedOptions:(id)arg2;
- (id)_dequeueCellForIndexPath:(id)arg1;
- (id)_dividerImage;
- (long long)_editOptionIndexForIndexPath:(id)arg1;
- (id)_imageForIndexPath:(id)arg1;
- (id)_indexPathForEditOptionIndex:(long long)arg1;
- (bool)_isReloadCollectionRequired:(id)arg1 selectedOptions:(id)arg2;
- (id)_plusImage;
- (void)_setupFromCollection;
- (void)addCellTapped:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCollection:(id)arg1 forFaceView:(id)arg2 face:(id)arg3;
- (void)modifiedColor:(id)arg1;
- (id)optionAtIndex:(unsigned long long)arg1;
- (void)selectLastColor;

@end
