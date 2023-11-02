
@interface SLDHighlightDisambiguationPillRenderer : NSObject {
    bool  _RTL;
    NSArray * _contactImages;
    SLHighlightDisambiguationPillMetrics * _metricsProvider;
    UISSlotStyle * _slotStyle;
    SLDHighlightDisambiguationPillSlotTag * _slotTag;
}

@property (getter=isRTL, nonatomic) bool RTL;
@property (nonatomic, retain) NSArray *contactImages;
@property (nonatomic, retain) SLHighlightDisambiguationPillMetrics *metricsProvider;
@property (nonatomic, retain) UISSlotStyle *slotStyle;
@property (nonatomic, retain) SLDHighlightDisambiguationPillSlotTag *slotTag;

- (void).cxx_destruct;
- (void)_renderAvatarInContext:(struct CGContext { }*)arg1;
- (id)contactImages;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;
- (bool)isRTL;
- (id)metricsProvider;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setContactImages:(id)arg1;
- (void)setMetricsProvider:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSlotStyle:(id)arg1;
- (void)setSlotTag:(id)arg1;
- (id)slotStyle;
- (id)slotTag;

@end
