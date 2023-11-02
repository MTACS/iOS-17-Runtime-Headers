
@interface MUStackLayout : MUConstraintLayout {
    MUStackLayoutInternal * _internal;
}

@property (nonatomic) long long alignment;
@property (nonatomic) bool alignmentBoundsContent;
@property (nonatomic) float alignmentFittingSizePriority;
@property (nonatomic, copy) NSArray *arrangedLayoutItems;
@property (nonatomic) long long axis;
@property (nonatomic) <MULayoutItem> *container;
@property (nonatomic) long long distribution;
@property (nonatomic) bool distributionBoundsContent;
@property (nonatomic) float distributionFittingSizePriority;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) double spacing;

- (void).cxx_destruct;
- (void)addArrangedLayoutItem:(id)arg1;
- (long long)alignment;
- (bool)alignmentBoundsContent;
- (bool)alignmentBoundsContentForArrangedLayoutItem:(id)arg1;
- (float)alignmentFittingSizePriority;
- (float)alignmentFittingSizePriorityForArrangedLayoutItem:(id)arg1;
- (long long)alignmentForArrangedLayoutItem:(id)arg1;
- (id)arrangedLayoutItems;
- (long long)axis;
- (id)container;
- (void)disableAlignmentForArrangedLayoutItem:(id)arg1;
- (long long)distribution;
- (bool)distributionBoundsContent;
- (float)distributionFittingSizePriority;
- (bool)hasAlignmentForArrangedLayoutItem:(id)arg1;
- (id)initWithContainer:(id)arg1 axis:(long long)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct UIOffset { double x1; double x2; })offsetForArrangedLayoutItem:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })paddingForArrangedLayoutItem:(id)arg1;
- (void)removeArrangedLayoutItem:(id)arg1;
- (void)resetAlignmentForArrangedLayoutItem:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setAlignment:(long long)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setAlignmentBoundsContent:(bool)arg1;
- (void)setAlignmentBoundsContent:(bool)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setAlignmentFittingSizePriority:(float)arg1;
- (void)setAlignmentFittingSizePriority:(float)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setArrangedLayoutItems:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setContainer:(id)arg1;
- (void)setDistribution:(long long)arg1;
- (void)setDistributionBoundsContent:(bool)arg1;
- (void)setDistributionFittingSizePriority:(float)arg1;
- (void)setInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOffset:(struct UIOffset { double x1; double x2; })arg1 forArrangedLayoutItem:(id)arg2;
- (void)setPadding:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forArrangedLayoutItem:(id)arg2;
- (void)setSpacing:(double)arg1;
- (double)spacing;

@end
