
@interface WFBatteryLevelTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerPercentageSliderCellDelegate> {
    NSNumber * _parameterSectionIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *parameterSectionIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)customSections;
- (void)disableRowVisibilityFor:(id)arg1;
- (void)enableRowVisibilityFor:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (id)localizedTextForCellAtIndexPath:(id)arg1 value:(double)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)parameterSectionIndex;
- (void)sliderValueChangedToValue:(double)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)updateCellLabelsWithValue:(double)arg1;

@end
