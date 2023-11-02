
@interface PKTextInputUITextInputInterface : NSObject

+ (bool)_callShouldChangeTextInRange:(id)arg1 replacementText:(id)arg2 inTextInput:(id)arg3;
+ (bool)_callShouldInsertText:(id)arg1 inTextInput:(id)arg2 isMarkedText:(bool)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeFromUITextPosition:(id)arg1 toUITextPosition:(id)arg2 inTextInput:(id)arg3;
+ (bool)_selectTextRange:(id)arg1 inTextInput:(id)arg2;
+ (id)_uiTextRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextInput:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })activePreviewRangeInTextInput:(id)arg1;
+ (id)attributesAtCharacterIndex:(long long)arg1 inTextInput:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForCharacterIndex:(long long)arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectInCoordinateSpace:(id)arg1 inTextInput:(id)arg2;
+ (long long)characterIndexClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 forInsertingText:(bool)arg4;
+ (long long)characterIndexClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 forInsertingText:(bool)arg4 adjustForLastCharacter:(bool)arg5;
+ (bool)clearActivePreviewInTextInput:(id)arg1;
+ (bool)configureSelectionStyleForDeletionPreviewInTextInput:(id)arg1;
+ (bool)configureSelectionStyleForHighlightInTextInput:(id)arg1;
+ (bool)configureSelectionStyleForNormalSelectionInTextInput:(id)arg1;
+ (long long)contentLengthForTextInput:(id)arg1;
+ (bool)deleteTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextInput:(id)arg2;
+ (id)editableTextAttachmentFileTypes;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3;
+ (bool)insertCommittedText:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 inTextInput:(id)arg5;
+ (id)insertTextPlaceholderWithSize:(struct CGSize { double x1; double x2; })arg1 inTextInput:(id)arg2;
+ (bool)isProtectedTextAttachment:(id)arg1;
+ (bool)isValidRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextInput:(id)arg2;
+ (bool)makeTextInputFirstResponder:(id)arg1 forPencilInput:(bool)arg2;
+ (void)notifyTextDidChangeInTextInput:(id)arg1;
+ (void)notifyTextWillChangeInTextInput:(id)arg1;
+ (id)protectedCharacterIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextInput:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterAtIndex:(unsigned long long)arg1 inTextInput:(id)arg2;
+ (id)rectValuesForSelectionRects:(id)arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 intersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (void)removeTextPlaceholder:(id)arg1 inTextInput:(id)arg2;
+ (bool)selectTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextInput:(id)arg2;
+ (bool)selectWordBoundaryAtPoint:(struct CGPoint { double x1; double x2; })arg1 inTextInput:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeInTextInput:(id)arg1;
+ (id)selectionRectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 intersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (bool)setSelectionWithReferencePoint:(struct CGPoint { double x1; double x2; })arg1 inTextInput:(id)arg2;
+ (bool)showSelectionCommandsForTextInput:(id)arg1;
+ (id)stringInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextInput:(id)arg2;

@end
