
@interface PXNavigationListDisplayAssetCollectionItem : PXNavigationListItem {
    <PXDisplayAssetCollection> * _collection;
    bool  _deletable;
    long long  _indentationLevel;
    bool  _renamable;
    bool  _reorderable;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *collection;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) unsigned long long lockState;
@property (getter=isReorderable, nonatomic) bool reorderable;

- (void).cxx_destruct;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)glyphImageName;
- (id)imageNameForIdentifier;
- (long long)indentationLevel;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 displayAssetCollection:(id)arg3 itemCount:(long long)arg4;
- (bool)isDeletable;
- (bool)isDraggable;
- (bool)isRenamable;
- (bool)isReorderable;
- (id)representedObject;
- (void)setIndentationLevel:(long long)arg1;
- (void)setReorderable:(bool)arg1;

@end
