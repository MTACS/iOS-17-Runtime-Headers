
@interface SFFluidCollectionViewDropItem : NSObject <SFFluidCollectionViewDropItem> {
    UIDragItem * _dragItem;
    NSIndexPath * _sourceIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *sourceIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dragItem;
- (void)setDragItem:(id)arg1;
- (void)setSourceIndexPath:(id)arg1;
- (id)sourceIndexPath;

@end
