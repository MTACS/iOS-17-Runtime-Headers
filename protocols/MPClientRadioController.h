
@protocol MPClientRadioController <NSObject>

@required

- (void)clientRadioControllerRadioAvailabilityDidChange:(bool)arg1;
- (void)clientRadioControllerRecentStationsDidChange;

@end
