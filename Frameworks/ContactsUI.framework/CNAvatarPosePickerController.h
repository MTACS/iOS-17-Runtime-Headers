
@interface CNAvatarPosePickerController : NSObject <CNPhotoPickerVariantListControllerDelegate> {
    <CNAvatarPosePickerControllerDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredContentSize;
    long long  _numberOfItemsPerRow;
    CNPhotoPickerAnimojiProviderItem * _originalProviderItem;
    CNPhotoPickerVariantListController * _posePickerController;
    CNPhotoPickerVariantsManager * _variantsManager;
}

@property (nonatomic) <CNAvatarPosePickerControllerDelegate> *delegate;
@property (nonatomic) struct CGSize { double x1; double x2; } desiredContentSize;
@property (nonatomic) long long numberOfItemsPerRow;
@property (nonatomic, retain) CNPhotoPickerAnimojiProviderItem *originalProviderItem;
@property (nonatomic, retain) CNPhotoPickerVariantListController *posePickerController;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;

- (void).cxx_destruct;
- (id)delegate;
- (struct CGSize { double x1; double x2; })desiredContentSize;
- (id)initWithAnimojiProviderItem:(id)arg1 variantsManager:(id)arg2;
- (id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2;
- (long long)numberOfItemsPerRow;
- (id)originalProviderItem;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (id)posePickerController;
- (id)posePickerViewController;
- (void)setDelegate:(id)arg1;
- (void)setDesiredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfItemsPerRow:(long long)arg1;
- (void)setOriginalProviderItem:(id)arg1;
- (void)setPosePickerController:(id)arg1;
- (void)setVariantsManager:(id)arg1;
- (id)variantsManager;

@end
