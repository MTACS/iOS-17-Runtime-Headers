
@interface PKDrawingPaletteStatisticsEventLogger : NSObject <PKDrawingPaletteStatistics> {
    double  _lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
    double  _lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
@property (nonatomic) double lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
@property (readonly) Class superclass;

- (double)lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
- (double)lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
- (void)recordHandwritingToolSelected;
- (void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:(double)arg1;
- (void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:(double)arg1;
- (void)setLastHandwritingToolUsedOverDrawingAttachmentTimestamp:(double)arg1;
- (void)setLastInkingToolUsedOverNonDrawingAttachmentTimestamp:(double)arg1;

@end
