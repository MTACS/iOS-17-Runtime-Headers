
@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal { id x1; id x2; struct OpaqueFigSubtitleRenderer {} *x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; unsigned int x7; } * layerInternal;
}

- (void)dealloc;
- (struct __CFString { }*)getContentID;
- (void)handleNeedsLayoutNotification;
- (id)init;
- (void)layoutSublayers;
- (void)setContent:(struct __CFDictionary { }*)arg1;
- (void)setNeedsDisplay;
- (void)setReLayout;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { }*)arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
