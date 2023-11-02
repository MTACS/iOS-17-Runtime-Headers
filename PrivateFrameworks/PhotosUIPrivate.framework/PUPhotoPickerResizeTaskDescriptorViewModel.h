
@interface PUPhotoPickerResizeTaskDescriptorViewModel : PXObservable <PXInfoProvider, PXInfoUpdaterObserver> {
    <PUPhotoPickerResizeTaskDescriptorViewModelDelegate> * _delegate;
    UIMenu * _fileSizeMenu;
    NSString * _localizedFileSizeDescription;
    PXInfoUpdater * _localizedFileSizeDescriptionUpdater;
    NSObject<OS_dispatch_queue> * _localizedFileSizeDescriptionUpdaterQueue;
    NSString * _localizedTitle;
    PUPhotoPickerResizeTaskDescriptor * _resizeTaskDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoPickerResizeTaskDescriptorViewModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIMenu *fileSizeMenu;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedFileSizeDescription;
@property (nonatomic, retain) PXInfoUpdater *localizedFileSizeDescriptionUpdater;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *localizedFileSizeDescriptionUpdaterQueue;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) PUPhotoPickerResizeTaskDescriptor *resizeTaskDescriptor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_infoDictionaryForLocalizedTitle:(id)arg1 localizedFileSizeDescription:(id)arg2;
- (id)delegate;
- (id)description;
- (id)fileSizeMenu;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)init;
- (void)invalidateAssetsForResizing;
- (id)localizedFileSizeDescription;
- (id)localizedFileSizeDescriptionUpdater;
- (id)localizedFileSizeDescriptionUpdaterQueue;
- (id)localizedTitle;
- (void)performChanges:(id /* block */)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)resizeTaskDescriptor;
- (void)setDelegate:(id)arg1;
- (void)setFileSizeMenu:(id)arg1;
- (void)setLocalizedFileSizeDescriptionUpdater:(id)arg1;
- (void)setLocalizedFileSizeDescriptionUpdaterQueue:(id)arg1;
- (void)setResizeTaskDescriptor:(id)arg1;

@end
