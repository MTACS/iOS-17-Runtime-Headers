
@interface PXFilterFooterController : NSObject <PXFilterFooterViewDelegate> {
    PXActionManager * _actionManager;
    PXContentFilterState * _contentFilterState;
    PXFilterFooterView * _footerFilterView;
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    UIView * _view;
}

@property (nonatomic, copy) PXContentFilterState *contentFilterState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXFilterFooterView *footerFilterView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, retain) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (id)contentFilterState;
- (void)filterFooterViewDidTapShowFilter:(id)arg1 sender:(id)arg2;
- (id)footerFilterView;
- (id)init;
- (id)initWithActionManager:(id)arg1 photoLibrary:(id)arg2;
- (id)libraryFilterState;
- (void)setContentFilterState:(id)arg1;
- (void)setLibraryFilterState:(id)arg1;
- (void)setSharedLibraryStatusProvider:(id)arg1;
- (void)setView:(id)arg1;
- (id)sharedLibraryStatusProvider;
- (id)view;

@end
