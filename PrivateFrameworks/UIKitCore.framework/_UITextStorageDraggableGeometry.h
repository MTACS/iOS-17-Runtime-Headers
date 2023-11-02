
@interface _UITextStorageDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting> {
    long long  _geometryOptions;
    UIColor * _previousBackgroundColor;
    NSTextStorage * _textStorage;
    UIView<UITextDragSupporting> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long geometryOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic, readonly) UIView<UITextDragSupporting> *view;

- (void).cxx_destruct;
- (id)_draggableTextInRange:(id)arg1;
- (bool)_isActualLink:(id)arg1;
- (id /* block */)_previewProviderForTextInRange:(id)arg1;
- (void)_renderTextInRange:(id)arg1 image:(out id*)arg2 boundingRectangles:(out id*)arg3 forLifting:(bool)arg4;
- (id /* block */)_targetedPreviewProviderForImage:(id)arg1 inRange:(id)arg2;
- (id /* block */)_targetedPreviewProviderForTextInRange:(id)arg1;
- (id /* block */)_targetedPreviewProviderForTextInRange:(id)arg1 dismissing:(bool)arg2 overrideLifting:(id /* block */)arg3;
- (id)attributedStringsForTextRanges:(id)arg1;
- (id)draggableObjectsForTextRange:(id)arg1;
- (long long)geometryOptions;
- (id)initWithView:(id)arg1 textStorage:(id)arg2;
- (id)performSameViewDropOperation:(id)arg1;
- (id)previewForDroppingTextInRange:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;
- (void)setGeometryOptions:(long long)arg1;
- (id /* block */)targetedPreviewProviderForTextInRange:(id)arg1 dismissing:(bool)arg2;
- (id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)textRangesForAttachmentsInTextRange:(id)arg1;
- (id)textStorage;
- (id)view;

@end
