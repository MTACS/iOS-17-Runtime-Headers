
@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (double)baselineOffset;
- (int)elementKind;
- (void)invalidate;
- (id)rendererForAttachment;
- (struct CGSize { double x1; double x2; })size;
- (bool)wantsSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
