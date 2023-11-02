
@interface PXContentUnavailablePlaceholderManager : NSObject <PXPhotoLibraryUIChangeObserver, PXSectionedDataSourceManagerObserver> {
    NSString * _customMessage;
    NSString * _customTitle;
    bool  _dataSourceEmpty;
    <PXContentUnavailablePlaceholderManagerDelegate> * _delegate;
    struct { 
        bool didChange; 
    }  _delegateRespondsTo;
    PXGadgetDataSourceManager * _gadgetDataSourceManager;
    bool  _libraryEmpty;
    PHFetchResult * _singleAssetFetchResult;
}

@property (nonatomic, readonly) NSString *customMessage;
@property (nonatomic, readonly) NSString *customTitle;
@property (getter=isDataSourceEmpty, nonatomic) bool dataSourceEmpty;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXContentUnavailablePlaceholderManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetDataSourceManager *gadgetDataSourceManager;
@property (readonly) unsigned long long hash;
@property (getter=isLibraryEmpty, nonatomic) bool libraryEmpty;
@property (nonatomic, readonly) NSString *placeholderButtonTitle;
@property (nonatomic, readonly) NSString *placeholderMessage;
@property (nonatomic, readonly) NSString *placeholderTitle;
@property (nonatomic, retain) PHFetchResult *singleAssetFetchResult;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsPlaceholder;

- (void).cxx_destruct;
- (void)_gadgetDataSourceDidChange;
- (void)_invalidate;
- (id)customMessage;
- (id)customTitle;
- (id)delegate;
- (id)gadgetDataSourceManager;
- (id)init;
- (id)initWithGadgetDataSourceManager:(id)arg1 customTitle:(id)arg2 customMessage:(id)arg3;
- (bool)isDataSourceEmpty;
- (bool)isLibraryEmpty;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performPlaceholderButtonAction;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)placeholderButtonTitle;
- (id)placeholderMessage;
- (id)placeholderTitle;
- (void)setDataSourceEmpty:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetDataSourceManager:(id)arg1;
- (void)setLibraryEmpty:(bool)arg1;
- (void)setSingleAssetFetchResult:(id)arg1;
- (id)singleAssetFetchResult;
- (bool)wantsPlaceholder;

@end
