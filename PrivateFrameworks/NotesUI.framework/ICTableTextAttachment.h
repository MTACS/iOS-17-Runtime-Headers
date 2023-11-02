
@interface ICTableTextAttachment : ICTextAttachment {
    struct CGSize { 
        double width; 
        double height; 
    }  _lastAttachmentSize;
    double  _lastAvailableWidth;
}

@property (nonatomic) struct CGSize { double x1; double x2; } lastAttachmentSize;
@property (nonatomic) double lastAvailableWidth;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (struct { double x1; double x2; double x3; double x4; })attachmentBoundsMargins;
- (bool)canDragWithoutSelecting;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forPlainText:(bool)arg3 forStandardizedText:(bool)arg4;
- (struct CGSize { double x1; double x2; })lastAttachmentSize;
- (double)lastAvailableWidth;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1 textContainer:(id)arg2;
- (void)setLastAttachmentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastAvailableWidth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1;
- (struct CGSize { double x1; double x2; })attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (Class)attachmentViewClassForTextContainer:(id)arg1;
- (Class)attachmentViewControllerClass;
- (double)availableWidthForTextContainer:(id)arg1;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (bool)supportsDraggingWithoutSelecting;

@end
