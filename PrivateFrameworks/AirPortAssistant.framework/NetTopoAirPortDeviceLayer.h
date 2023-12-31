
@interface NetTopoAirPortDeviceLayer : NetTopoObjectLayer

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })getConnectionAttachmentLocations;
- (void)initNetTopoAirPortDeviceLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)layoutSublayers;
- (void)pickCorrectImagesForContentsScale:(double)arg1;
- (void)setAssociatedNode:(id)arg1;

@end
