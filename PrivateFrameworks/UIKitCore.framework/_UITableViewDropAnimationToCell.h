
@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation {
    UITableViewCell * _cell;
    UIDragPreviewParameters * _previewParameters;
}

@property (nonatomic) UITableViewCell *cell;
@property (nonatomic, retain) UIDragPreviewParameters *previewParameters;

- (void).cxx_destruct;
- (id)cell;
- (id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3;
- (id)previewParameters;
- (void)setCell:(id)arg1;
- (void)setPreviewParameters:(id)arg1;

@end
