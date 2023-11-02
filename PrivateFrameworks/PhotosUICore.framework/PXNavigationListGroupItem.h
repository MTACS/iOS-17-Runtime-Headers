
@interface PXNavigationListGroupItem : PXNavigationListItem {
    PHCollection * _collection;
    bool  _draggable;
    bool  _expandable;
    bool  _group;
}

+ (id)titleForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 collection:(id)arg2;
- (bool)isDraggable;
- (bool)isExpandable;
- (bool)isGroup;

@end
