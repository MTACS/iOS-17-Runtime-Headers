
@interface PaperKit.InlineDrawingTextAttachmentView : PKTextAttachmentDrawingView <UIDropInteractionDelegate_Private> {
    void $__lazy_storage_$_acceptedDropLayouts;
    void dropInteraction;
    void dropSessionType;
}

- (void).cxx_destruct;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)didMoveToWindow;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithAttachment:(id)arg1 drawingClass:(Class)arg2 inserted:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 drawing:(id)arg2;

@end
