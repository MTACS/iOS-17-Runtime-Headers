
@interface PXAddUnverifiedPeopleActionPerformer : PXActionPerformer <PHPickerViewControllerDelegate> {
    PHPhotoLibrary * _photoLibrary;
    NSArray * _selectedPeopleToAdd;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSArray *selectedPeopleToAdd;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createPersonWithPickerResults:(id)arg1;
- (id)initWithPresentationEnvironment:(id)arg1 photoLibrary:(id)arg2;
- (void)performUserInteractionTask;
- (id)photoLibrary;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (id)selectedPeopleToAdd;
- (void)setPhotoLibrary:(id)arg1;
- (void)setSelectedPeopleToAdd:(id)arg1;

@end
