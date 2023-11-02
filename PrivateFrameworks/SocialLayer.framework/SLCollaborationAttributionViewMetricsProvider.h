
@interface SLCollaborationAttributionViewMetricsProvider : NSObject {
    void metrics;
}

@property (nonatomic, readonly) double avatarDiameter;
@property (nonatomic, readonly) double avatarLabelSpace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic, readonly) double titleSubtitleSpace;

- (void).cxx_destruct;
- (double)avatarDiameter;
- (double)avatarLabelSpace;
- (struct CGSize { double x1; double x2; })drawingSize;
- (id)init;
- (id)initWithSlotStyle:(id)arg1 tag:(id)arg2;
- (id)initWithVariant:(long long)arg1 slotStyle:(id)arg2 maxWidth:(double)arg3 placeholderGlyphConfig:(id)arg4;
- (const struct __CTLine { }*)singleLineSubtitleForString:(id)arg1;
- (const struct __CTLine { }*)singleLineTitleForString:(id)arg1;
- (double)titleSubtitleSpace;

@end
