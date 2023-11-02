
@protocol HUTileCellProtocol <NSObject, HUCellProtocol>

@required

- (unsigned long long)backgroundDisplayStyle;
- (<HUBackgroundEffectViewGrouping> *)backgroundEffectGrouper;
- (void)setBackgroundDisplayStyle:(unsigned long long)arg1;
- (void)setBackgroundEffectGrouper:(id <HUBackgroundEffectViewGrouping>)arg1;

@end
