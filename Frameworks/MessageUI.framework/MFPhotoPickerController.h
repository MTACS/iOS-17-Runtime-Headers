
@interface MFPhotoPickerController : UICollectionViewController <MFPreferredHeightProviding, UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    double  _availableWidth;
    struct { 
        unsigned int delegateRespondsToPickerDidCancel : 1; 
        unsigned int delegateRespondsToSystemPickerDidCancel : 1; 
        unsigned int delegateRespondsToDidDeselectAssetWithIdentifier : 1; 
        unsigned int delegateRespondsToPresentingViewControllerForPhotoPicker : 1; 
    }  _flags;
    PHCachingImageManager * _imageManager;
    PHFetchResult * _photosFetchResult;
    <MFPhotoPickerControllerDelegate> * _pickerDelegate;
    MFPhotoPickerProgressManager * _progressManager;
    NSMutableSet * _selectedAssetIdentifiers;
    UIImagePickerController * _systemImagePicker;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (nonatomic) double availableWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHCachingImageManager *imageManager;
@property (nonatomic, retain) PHFetchResult *photosFetchResult;
@property (nonatomic) <MFPhotoPickerControllerDelegate> *pickerDelegate;
@property (nonatomic, retain) MFPhotoPickerProgressManager *progressManager;
@property (nonatomic, readonly) NSSet *selectedAssetIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImagePickerController *systemImagePicker;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

+ (id)log;

- (void).cxx_destruct;
- (bool)_isPresentingInASheet;
- (id)_visibleCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (void)addSelectedAssetIdentifier:(id)arg1;
- (void)addSelectedAssetIdentifiers:(id)arg1;
- (double)availableWidth;
- (void)close:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)imageManager;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithPhotoPickerProgressManager:(id)arg1;
- (void)loadView;
- (id)photosFetchResult;
- (id)pickerDelegate;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (id)progressManager;
- (void)removeAllSelectedAssetIdentifiers;
- (void)removeSelectedAssetIdentifier:(id)arg1;
- (id)selectedAssetIdentifiers;
- (void)setAvailableWidth:(double)arg1;
- (void)setImageManager:(id)arg1;
- (void)setPhotosFetchResult:(id)arg1;
- (void)setPickerDelegate:(id)arg1;
- (void)setProgressManager:(id)arg1;
- (void)setSystemImagePicker:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)showSystemImagePicker:(id)arg1;
- (id)systemImagePicker;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
