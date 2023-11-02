
@interface SLHighlightPillMetrics : NSObject {
    void $__lazy_storage_$_pillMetrics;
    void metrics;
    void style;
    void tag;
    void variant;
}

@property (nonatomic, readonly) double avatarContainerWidth;
@property (nonatomic, readonly) double avatarDiameter;
@property (nonatomic, readonly) double avatarKnockoutWidth;
@property (nonatomic, readonly) const struct __CTFont { }*baseFont;
@property (nonatomic, readonly) const struct __CTFontDescriptor { }*chevronFontDescriptor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } chevronSize;
@property (nonatomic, readonly) const struct __CTLine { }*firstLine;
@property (nonatomic, readonly) bool hasValidMetricsForDrawing;
@property (nonatomic, readonly) long long imageCount;
@property (nonatomic, readonly) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } labelHorizontalMargins;
@property (nonatomic, readonly) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic, readonly) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } minimumLabelHorizontalMargines;
@property (nonatomic, readonly) double overlappedAvatarKnockoutBorderWidth;
@property (nonatomic, readonly) double overlappedAvatarVisibleWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pillSize;
@property (nonatomic, readonly) const struct __CTLine { }*secondLine;
@property (nonatomic, readonly) bool shouldDisplayPin;
@property (nonatomic, readonly) double specMaxWidth;
@property (nonatomic, readonly) bool useDoubleLinedLabel;

+ (id)accessibilityLabelFor:(id)arg1;
+ (const struct __CTFontDescriptor { }*)chevronFontDescriptorWithStyle:(id)arg1 variant:(unsigned long long)arg2;
+ (struct CGSize { double x1; double x2; })chevronSizeWithStyle:(id)arg1 variant:(unsigned long long)arg2;
+ (long long)maxSendersToDisplayWithStyle:(id)arg1 variant:(unsigned long long)arg2;
+ (double)pillHeightWithStyle:(id)arg1 variant:(unsigned long long)arg2 maxWidth:(double)arg3;
+ (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })pillMarginsWithStyle:(id)arg1 variant:(unsigned long long)arg2 maxWidth:(double)arg3;
+ (const struct __CTLine { }*)truncatedLineFrom:(id)arg1 maxWidth:(double)arg2;

- (void).cxx_destruct;
- (double)avatarContainerWidth;
- (double)avatarDiameter;
- (double)avatarKnockoutWidth;
- (const struct __CTFont { }*)baseFont;
- (const struct __CTFontDescriptor { }*)chevronFontDescriptor;
- (struct CGSize { double x1; double x2; })chevronSize;
- (const struct __CTLine { }*)firstLine;
- (bool)hasValidMetricsForDrawing;
- (long long)imageCount;
- (id)init;
- (id)initWithSlotStyle:(id)arg1 tag:(id)arg2;
- (id)initWithSlotStyle:(id)arg1 tag:(id)arg2 variant:(unsigned long long)arg3;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })labelHorizontalMargins;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })minimumLabelHorizontalMargines;
- (double)overlappedAvatarKnockoutBorderWidth;
- (double)overlappedAvatarVisibleWidth;
- (struct CGSize { double x1; double x2; })pillSize;
- (const struct __CTLine { }*)secondLine;
- (bool)shouldDisplayPin;
- (double)specMaxWidth;
- (bool)useDoubleLinedLabel;

@end
