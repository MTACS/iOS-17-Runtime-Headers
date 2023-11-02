
@interface HUAvailableTriggerItemSwitchCell : HUIconSwitchCell {
    double  _reservedSwitchWidth;
    bool  _switchHidden;
}

@property (nonatomic) double reservedSwitchWidth;
@property (getter=switchIsHidden, nonatomic) bool switchHidden;

- (double)reservedSwitchWidth;
- (void)setReservedSwitchWidth:(double)arg1;
- (void)setSwitchHidden:(bool)arg1;
- (bool)switchIsHidden;
- (void)updateConstraints;

@end
