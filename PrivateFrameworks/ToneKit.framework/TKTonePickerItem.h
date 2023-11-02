
@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {
    NSArray * _childrenToneClassicsPickerItems;
    float  _downloadProgress;
    unsigned long long  _itemKind;
    bool  _needsActivityIndicator;
    bool  _needsDownloadProgress;
    bool  _needsRoomForCheckmark;
    TKTonePickerSectionItem * _parentSectionItem;
}

@property (setter=_setChildrenToneClassicsPickerItems:, nonatomic, copy) NSArray *childrenToneClassicsPickerItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDownloadProgress:, nonatomic) float downloadProgress;
@property (readonly) unsigned long long hash;
@property (setter=_setItemKind:, nonatomic) unsigned long long itemKind;
@property (setter=_setNeedsActivityIndicator:, nonatomic) bool needsActivityIndicator;
@property (setter=_setNeedsDownloadProgress:, nonatomic) bool needsDownloadProgress;
@property (setter=_setNeedsRoomForCheckmark:, nonatomic) bool needsRoomForCheckmark;
@property (nonatomic, readonly) long long numberOfChildren;
@property (setter=_setParentSectionItem:, nonatomic) TKTonePickerSectionItem *parentSectionItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setChildrenToneClassicsPickerItems:(id)arg1;
- (void)_setDownloadProgress:(float)arg1;
- (void)_setItemKind:(unsigned long long)arg1;
- (void)_setNeedsActivityIndicator:(bool)arg1;
- (void)_setNeedsDownloadProgress:(bool)arg1;
- (void)_setNeedsRoomForCheckmark:(bool)arg1;
- (void)_setParentSectionItem:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
- (id)childrenToneClassicsPickerItems;
- (float)downloadProgress;
- (unsigned long long)itemKind;
- (bool)needsActivityIndicator;
- (bool)needsDownloadProgress;
- (bool)needsRoomForCheckmark;
- (long long)numberOfChildren;
- (id)parentSectionItem;

@end
