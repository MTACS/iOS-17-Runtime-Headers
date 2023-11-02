
@interface NTKFaceSlotComplicationTopLevelListProvider : NSObject <NTKComplicationPickerListProvider> {
    NSArray * _complications;
    NSDictionary * _complicationsBySectionIdentifier;
    NSDiffableDataSourceSnapshot * _pickerListDataSourceSnapshot;
    bool  _pickerListProviderSlotIsRich;
    <NTKComplicationItem> * _pickerSelectedItem;
    NTKComplication * _selectedItemIgnoringMoreButton;
    unsigned long long  _topLevelLimit;
}

@property (nonatomic, copy) NSArray *complications;
@property (nonatomic, copy) NSDictionary *complicationsBySectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot;
@property (nonatomic, readonly) bool pickerListProviderSlotIsRich;
@property (nonatomic, retain) <NTKComplicationItem> *pickerSelectedItem;
@property (nonatomic, retain) NTKComplication *selectedItemIgnoringMoreButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long topLevelLimit;

- (void).cxx_destruct;
- (void)_buildDataIfNeeded;
- (id)complications;
- (id)complicationsBySectionIdentifier;
- (id)detailListProviderForSectionIdentifier:(id)arg1;
- (id)initWithRichSlot:(bool)arg1 complications:(id)arg2 selectedComplication:(id)arg3;
- (id)pickerListDataSourceSnapshot;
- (bool)pickerListProviderSlotIsRich;
- (id)pickerSelectedItem;
- (id)selectedItemIgnoringMoreButton;
- (void)setComplications:(id)arg1;
- (void)setComplicationsBySectionIdentifier:(id)arg1;
- (void)setPickerListDataSourceSnapshot:(id)arg1;
- (void)setPickerSelectedItem:(id)arg1;
- (void)setSelectedItemIgnoringMoreButton:(id)arg1;
- (unsigned long long)topLevelLimit;

@end
