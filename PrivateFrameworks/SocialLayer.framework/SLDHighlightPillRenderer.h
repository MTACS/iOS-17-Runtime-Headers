
@interface SLDHighlightPillRenderer : NSObject {
    bool  _RTL;
    NSArray * _contactImages;
    struct __CTFont { } * _font;
    SLHighlightPillMetrics * _metricsProvider;
    UISSlotStyle * _slotStyle;
    SLDHighlightPillSlotTag * _slotTag;
}

@property (getter=isRTL, nonatomic) bool RTL;
@property (nonatomic, retain) NSArray *contactImages;
@property (nonatomic) struct __CTFont { }*font;
@property (nonatomic, retain) SLHighlightPillMetrics *metricsProvider;
@property (nonatomic, retain) UISSlotStyle *slotStyle;
@property (nonatomic, retain) SLDHighlightPillSlotTag *slotTag;

- (void).cxx_destruct;
- (void)_drawAvatarImage:(struct CGImage { }*)arg1 inContext:(struct CGContext { }*)arg2 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_drawKnockoutBorderWidth:(double)arg1 atXPosition:(double)arg2 aroundImageWithYPosition:(double)arg3 diameter:(double)arg4 inContext:(struct CGContext { }*)arg5;
- (struct CGImage { }*)_newAvatarImageFromImageData:(id)arg1;
- (void)_renderAvatarsInContext:(struct CGContext { }*)arg1;
- (id)contactImages;
- (void)dealloc;
- (struct __CTFont { }*)font;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;
- (bool)isRTL;
- (id)metricsProvider;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setContactImages:(id)arg1;
- (void)setFont:(struct __CTFont { }*)arg1;
- (void)setMetricsProvider:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSlotStyle:(id)arg1;
- (void)setSlotTag:(id)arg1;
- (id)slotStyle;
- (id)slotTag;

@end
