
@interface PXSharedLibraryIncludedPeopleViewController : UICollectionViewController <PHPickerViewControllerDelegate, PXSectionedDataSourceManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collectionViewBounds;
    NSIndexPath * _currentSelectedIndexPath;
    PXSharedLibraryIncludedPeopleDataSourceManager * _dataSourceManager;
}

@property (nonatomic, retain) NSIndexPath *currentSelectedIndexPath;
@property (nonatomic, retain) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)heightForWidth:(double)arg1 numberOfItems:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_infoAtIndexPath:(id)arg1;
- (id)_personAtIndexPath:(id)arg1;
- (void)_removeCell:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)currentSelectedIndexPath;
- (id)dataSourceManager;
- (id)initWithDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)setCurrentSelectedIndexPath:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
