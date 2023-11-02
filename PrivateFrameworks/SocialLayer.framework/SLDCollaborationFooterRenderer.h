
@interface SLDCollaborationFooterRenderer : NSObject {
    SLDCollaborationFooterMetrics * _metrics;
    UISSlotStyle * _slotStyle;
    SLDCollaborationFooterSlotTag * _slotTag;
}

@property (nonatomic, readonly) SLDCollaborationFooterMetrics *metrics;
@property (nonatomic, retain) UISSlotStyle *slotStyle;
@property (nonatomic, retain) SLDCollaborationFooterSlotTag *slotTag;

- (void).cxx_destruct;
- (void)_renderString:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)_renderSubtitleInContext:(struct CGContext { }*)arg1 titleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_renderTitleInContext:(struct CGContext { }*)arg1 resultingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;
- (id)metrics;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setSlotStyle:(id)arg1;
- (void)setSlotTag:(id)arg1;
- (id)slotStyle;
- (id)slotTag;

@end
