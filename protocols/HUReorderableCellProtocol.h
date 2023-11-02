
@protocol HUReorderableCellProtocol <HUCellProtocol>

@required

- (bool)isRearranging;
- (void)setRearranging:(bool)arg1;

@optional

- (bool)reorderable;
- (void)setReorderable:(bool)arg1;

@end
