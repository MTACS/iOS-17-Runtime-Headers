
@interface SBMutableContinuousExposeAutoLayoutSpace : SBContinuousExposeAutoLayoutSpace

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } compactedBoundingBox;
@property (nonatomic, retain) SBContinuousExposeAutoLayoutConfiguration *configuration;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stageArea;
@property (getter=isStripVisible, nonatomic) bool stripVisible;

- (id)autoLayoutItemForDisplayItem:(id)arg1;
- (id)autoLayoutItemForDisplayItemIfExists:(id)arg1;

@end
