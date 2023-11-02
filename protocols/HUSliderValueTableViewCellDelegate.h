
@protocol HUSliderValueTableViewCellDelegate <NSObject>

@required

- (void)sliderValueTableViewCell:(HUSliderValueTableViewCell *)arg1 didChangeValue:(double)arg2;

@optional

- (NSString *)valueDescriptionForItem:(HFItem *)arg1 value:(double)arg2;

@end
