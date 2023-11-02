
@interface SLHighlightDisambiguationPillMetrics : NSObject {
    void $__lazy_storage_$_pillMetrics;
    void metrics;
}

@property (nonatomic, readonly) double avatarDiameter;
@property (nonatomic, readonly) struct CGImage { }*chevronImage;
@property (nonatomic, readonly) double chevronLeadingMargin;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } chevronSize;
@property (nonatomic, readonly) NSMutableAttributedString *firstLineAttributedString;
@property (nonatomic, readonly) struct CGColor { }*firstLineColor;
@property (nonatomic, readonly) const struct __CTFont { }*firstLineFont;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } firstLineSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } labelHorizontalMargins;
@property (nonatomic, readonly) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic, readonly) double pillHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pillSize;
@property (nonatomic, readonly) NSMutableAttributedString *secondLineAttributedString;
@property (nonatomic, readonly) struct CGColor { }*secondLineColor;
@property (nonatomic, readonly) const struct __CTFont { }*secondLineFont;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } secondLineSize;
@property (nonatomic, readonly) bool useChevron;
@property (nonatomic, readonly) bool useSingleLineLayout;

+ (id)accessibilityLabelFor:(id)arg1;
+ (id)firstLineStringFor:(id)arg1;
+ (id)secondLineStringFor:(id)arg1;

- (void).cxx_destruct;
- (double)avatarDiameter;
- (struct CGImage { }*)chevronImage;
- (double)chevronLeadingMargin;
- (struct CGSize { double x1; double x2; })chevronSize;
- (id)firstLineAttributedString;
- (struct CGColor { }*)firstLineColor;
- (const struct __CTFont { }*)firstLineFont;
- (struct CGSize { double x1; double x2; })firstLineSize;
- (id)init;
- (id)initWithSlotStyle:(id)arg1 tag:(id)arg2;
- (id)initWithSlotStyle:(id)arg1 tag:(id)arg2 variant:(unsigned long long)arg3;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })labelHorizontalMargins;
- (const struct __CTLine { }*)lineFrom:(id)arg1 maxWidth:(double)arg2;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (double)pillHeight;
- (struct CGSize { double x1; double x2; })pillSize;
- (id)secondLineAttributedString;
- (struct CGColor { }*)secondLineColor;
- (const struct __CTFont { }*)secondLineFont;
- (struct CGSize { double x1; double x2; })secondLineSize;
- (bool)useChevron;
- (bool)useSingleLineLayout;

@end
