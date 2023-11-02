
@interface ICInlineTextAttachment : ICAbstractTextAttachment

@property (nonatomic, retain) ICInlineAttachment *attachment;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)imageCache;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;

- (id)altText;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (Class)attachmentViewClassForTextContainer:(id)arg1;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4;
- (id)initWithAttachment:(id)arg1;
- (id)inlineAttachmentInContext:(id)arg1;
- (bool)isUnsupported;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1 styleAttributes:(id)arg2 textContainer:(id)arg3;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (Class)attachmentViewControllerClass;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;

@end
