
@protocol NTKComplicationPickerListProvider <NSObject>

@required

- (NSDiffableDataSourceSnapshot *)pickerListDataSourceSnapshot;
- (bool)pickerListProviderSlotIsRich;
- (<NTKComplicationItem> *)pickerSelectedItem;

@end
