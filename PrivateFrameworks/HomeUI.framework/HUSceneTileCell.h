
@interface HUSceneTileCell : HUTileCell {
    void _executeActionSetFuture;
    void executeActionSetFuture;
}

@property (nonatomic, retain) id executeActionSetFuture;
@property (nonatomic) bool rearranging;
@property (nonatomic) bool reorderable;

- (void).cxx_destruct;
- (id)executeActionSetFuture;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRearranging;
- (bool)reorderable;
- (void)setExecuteActionSetFuture:(id)arg1;
- (void)setRearranging:(bool)arg1;
- (void)setReorderable:(bool)arg1;
- (id)tappableAreaForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
