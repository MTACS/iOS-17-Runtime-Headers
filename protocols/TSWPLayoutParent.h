
@protocol TSWPLayoutParent

@required

- (unsigned int)autosizeFlagsForTextLayout:(TSWPLayout *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(TSWPLayout *)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (<NSFastEnumeration> *)dependentsOfTextLayout:(TSWPLayout *)arg1;
- (void)invalidateForAutosizingTextLayout:(TSWPLayout *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(TSWPLayout *)arg1;
- (Class)repClassForTextLayout:(TSWPLayout *)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(TSWPLayout *)arg1;

@optional

- (bool)allowsLastLineTruncation:(TSWPLayout *)arg1;
- (unsigned long long)initialCharIndex;
- (struct CGSize { double x1; double x2; })initialTextSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRectForTextLayout:(TSWPLayout *)arg1;
- (double)maxAutoGrowHeightForTextLayout:(TSWPLayout *)arg1;
- (double)maxAutoGrowWidthForTextLayout:(TSWPLayout *)arg1;
- (unsigned int)maxLineCountForTextLayout:(TSWPLayout *)arg1;
- (unsigned int)naturalAlignmentForTextLayout:(TSWPLayout *)arg1;
- (unsigned long long)pageCountForAttachment:(TSWPAttachment *)arg1;
- (unsigned long long)pageNumberForAttachment:(TSWPAttachment *)arg1;
- (bool)shouldHyphenateTextLayout:(TSWPLayout *)arg1;
- (<TSWPStyleProvider> *)styleProviderForLayout:(TSWPLayout *)arg1;
- (<TSWPStyleProvider> *)styleProviderForStorage:(TSWPStorage *)arg1;
- (unsigned int)textLayoutShouldIgnoreEquationAlignment:(TSWPLayout *)arg1;
- (bool)textLayoutShouldLayoutVertically:(TSWPLayout *)arg1;
- (bool)textLayoutShouldWrapAroundExternalDrawables:(TSWPLayout *)arg1;

@end
