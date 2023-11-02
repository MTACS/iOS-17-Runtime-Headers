
@interface _UIDropItem : UIDragItem {
    NSItemProvider * _dropItemProvider;
    UIDragItem * _localDragItem;
}

@property (getter=_dropItemProvider, setter=_setDropItemProvider:, nonatomic, retain) NSItemProvider *dropItemProvider;
@property (getter=_localDragItem, setter=_setLocalDragItem:, nonatomic, retain) UIDragItem *localDragItem;

- (void).cxx_destruct;
- (id)_dropItemProvider;
- (id)_localDragItem;
- (id)_privateLocalContext;
- (void)_setDropItemProvider:(id)arg1;
- (void)_setLocalDragItem:(id)arg1;
- (void)_setPrivateLocalContext:(id)arg1;
- (id)itemProvider;
- (id)localObject;
- (void)setLocalObject:(id)arg1;

@end
