
@interface HUDashboardFilterCategoryCell : UICollectionViewListCell <HUGridCellProtocol, HUReorderableCellProtocol, HUTileCellProtocol> {
    void areCellContentsHidden;
    void backgroundDisplayStyle;
    void backgroundEffectGrouper;
    void isRearranging;
    void item;
    void layoutOptions;
}

@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;
@property (nonatomic) unsigned long long backgroundDisplayStyle;
@property (nonatomic, retain) <HUBackgroundEffectViewGrouping> *backgroundEffectGrouper;
@property (nonatomic) bool cellContentsHidden;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic) bool rearranging;

+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (id)_bridgedConfigurationState;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (bool)areCellContentsHidden;
- (unsigned long long)backgroundDisplayStyle;
- (id)backgroundEffectGrouper;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRearranging;
- (id)item;
- (id)layoutOptions;
- (void)prepareForReuse;
- (void)setBackgroundDisplayStyle:(unsigned long long)arg1;
- (void)setBackgroundEffectGrouper:(id)arg1;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setRearranging:(bool)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
