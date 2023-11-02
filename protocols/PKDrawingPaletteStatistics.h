
@protocol PKDrawingPaletteStatistics <NSObject>

@required

- (void)recordHandwritingToolSelected;
- (void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:(double)arg1;
- (void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:(double)arg1;

@end
