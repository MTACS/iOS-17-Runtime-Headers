
@interface MUBoxLayout : MUConstraintLayout {
    MUBoxLayoutInternal * _internal;
}

@property (nonatomic, copy) NSArray *arrangedLayoutItems;
@property (nonatomic) <MULayoutItem> *container;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) bool horizontalAlignmentBoundsContent;
@property (nonatomic) float horizontalAlignmentFittingSizePriority;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) bool verticalAlignmentBoundsContent;
@property (nonatomic) float verticalAlignmentFittingSizePriority;

- (void).cxx_destruct;
- (void)addArrangedLayoutItem:(id)arg1;
- (id)arrangedLayoutItems;
- (id)container;
- (void)disableHorizontalAlignmentForArrangedLayoutItem:(id)arg1;
- (void)disableVerticalAlignmentForArrangedLayoutItem:(id)arg1;
- (bool)hasHorizontalAlignmentForArrangedLayoutItem:(id)arg1;
- (bool)hasVerticalAlignmentForArrangedLayoutItem:(id)arg1;
- (long long)horizontalAlignment;
- (bool)horizontalAlignmentBoundsContent;
- (bool)horizontalAlignmentBoundsContentForArrangedLayoutItem:(id)arg1;
- (float)horizontalAlignmentFittingSizePriority;
- (long long)horizontalAlignmentForArrangedLayoutItem:(id)arg1;
- (float)horizontalFittingSizePriorityForArrangedLayoutItem:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct UIOffset { double x1; double x2; })offsetForArrangedLayoutItem:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })paddingForArrangedLayoutItem:(id)arg1;
- (void)removeArrangedLayoutItem:(id)arg1;
- (void)resetHorizontalAlignmentForArrangedLayoutItem:(id)arg1;
- (void)resetVerticalAlignmentForArrangedLayoutItem:(id)arg1;
- (void)setArrangedLayoutItems:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setHorizontalAlignment:(long long)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setHorizontalAlignmentBoundsContent:(bool)arg1;
- (void)setHorizontalAlignmentBoundsContent:(bool)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setHorizontalAlignmentFittingSizePriority:(float)arg1;
- (void)setHorizontalFittingSizePriority:(float)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOffset:(struct UIOffset { double x1; double x2; })arg1 forArrangedLayoutItem:(id)arg2;
- (void)setPadding:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forArrangedLayoutItem:(id)arg2;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setVerticalAlignmentBoundsContent:(bool)arg1;
- (void)setVerticalAlignmentBoundsContent:(bool)arg1 forArrangedLayoutItem:(id)arg2;
- (void)setVerticalAlignmentFittingSizePriority:(float)arg1;
- (void)setVerticalFittingSizePriority:(float)arg1 forArrangedLayoutItem:(id)arg2;
- (long long)verticalAlignment;
- (bool)verticalAlignmentBoundsContent;
- (bool)verticalAlignmentBoundsContentForArrangedLayoutItem:(id)arg1;
- (float)verticalAlignmentFittingSizePriority;
- (long long)verticalAlignmentForArrangedLayoutItem:(id)arg1;
- (float)verticalFittingSizePriorityForArrangedLayoutItem:(id)arg1;

@end
