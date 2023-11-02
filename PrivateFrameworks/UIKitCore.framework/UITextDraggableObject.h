
@interface UITextDraggableObject : NSObject {
    NSItemProvider * _itemProvider;
    id /* block */  _previewProvider;
    UITextRange * _range;
    id /* block */  _targetedPreviewProvider;
}

@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, copy) id /* block */ previewProvider;
@property (nonatomic, retain) UITextRange *range;
@property (nonatomic, copy) id /* block */ targetedPreviewProvider;

+ (id)draggableObjectWithItemProvider:(id)arg1 fromRange:(id)arg2;

- (void).cxx_destruct;
- (id)itemProvider;
- (id /* block */)previewProvider;
- (id)range;
- (void)setItemProvider:(id)arg1;
- (void)setPreviewProvider:(id /* block */)arg1;
- (void)setRange:(id)arg1;
- (void)setTargetedPreviewProvider:(id /* block */)arg1;
- (id /* block */)targetedPreviewProvider;

@end
