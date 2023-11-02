
@interface PXNavigationListDisplayCollectionListItem : PXNavigationListItem {
    NSString * _accessoryGlyphImageName;
    <PXDisplayCollectionList> * _collection;
    bool  _deletable;
    bool  _draggable;
    bool  _expandable;
    bool  _expanded;
    NSString * _glyphImageName;
    long long  _indentationLevel;
    bool  _renamable;
    bool  _reorderable;
}

@property (nonatomic, readonly) <PXDisplayCollectionList> *collection;
@property (getter=isDraggable, nonatomic) bool draggable;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) long long indentationLevel;
@property (getter=isReorderable, nonatomic) bool reorderable;

- (void).cxx_destruct;
- (id)accessoryGlyphImageName;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)glyphImageName;
- (long long)indentationLevel;
- (id)initWithIdentifier:(id)arg1 displayCollectionList:(id)arg2 title:(id)arg3 itemCount:(long long)arg4;
- (bool)isDeletable;
- (bool)isDraggable;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isRenamable;
- (bool)isReorderable;
- (id)representedObject;
- (void)setDraggable:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)setReorderable:(bool)arg1;

@end
