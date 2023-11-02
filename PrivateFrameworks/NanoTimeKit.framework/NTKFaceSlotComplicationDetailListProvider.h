
@interface NTKFaceSlotComplicationDetailListProvider : NSObject <NTKComplicationPickerListProvider> {
    NSArray * _complications;
    NSDiffableDataSourceSnapshot * _pickerListDataSourceSnapshot;
    bool  _pickerListProviderSlotIsRich;
    <NTKComplicationItem> * _pickerSelectedItem;
}

@property (nonatomic, copy) NSArray *complications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot;
@property (nonatomic, readonly) bool pickerListProviderSlotIsRich;
@property (nonatomic, readonly) <NTKComplicationItem> *pickerSelectedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildDataIfNeeded;
- (id)complications;
- (id)initWithRichSlot:(bool)arg1 complications:(id)arg2 selectedComplication:(id)arg3;
- (id)pickerListDataSourceSnapshot;
- (bool)pickerListProviderSlotIsRich;
- (id)pickerSelectedItem;
- (void)setComplications:(id)arg1;
- (void)setPickerListDataSourceSnapshot:(id)arg1;

@end
