
@interface PUPhotoPickerFileSizeToolbarProvider : NSObject <PUPhotosGridViewSupplementalToolbarProvider, UITableViewDataSource, UITableViewDelegate> {
    NSSet * _cachedAssetSet;
    <PUPhotosGridViewSupplementalToolbarDataSource> * _dataSource;
    <PUPhotoPickerFileSizeToolbarProviderDelegate> * _delegate;
    bool  _preparingToPresentSizePickerViewController;
    NSArray * _resizeTaskDescriptors;
    PUPhotoPickerResizeTaskDescriptor * _selectedTaskDescriptor;
    UILabel * _sizePickerDescriptionLabel;
    UIBarButtonItem * _sizePickerItem;
    UITableViewController * _sizePickerViewController;
    NSMutableDictionary * _taskDescriptorsToCachedLabels;
    NSArray * _toolbarItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoPickerFileSizeToolbarProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldShowToolbar;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *toolbarItems;

- (void).cxx_destruct;
- (id)_computeSelectedIndexPath;
- (id)_localizedLabelForResizeTaskDescriptor:(id)arg1;
- (id)_orderedResizeTaskDescriptors;
- (id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;
- (void)_presentSizePicker:(id)arg1;
- (id)_sizePickerItem;
- (void)_updateSizePickerItemIfNeeded;
- (void)_updateTableViewSelection;
- (id)delegate;
- (id)initWithDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldShowToolbar;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)toolbarItems;

@end
