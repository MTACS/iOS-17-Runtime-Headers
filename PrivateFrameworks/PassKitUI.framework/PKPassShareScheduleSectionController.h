
@interface PKPassShareScheduleSectionController : PKPassShareSectionController <PKWeekdaySelectorDelegate> {
    PKPassShareTimeConfiguration * _configuration;
    NSArray * _dateRowItems;
    NSMutableArray * _dayRowItems;
    <PKPassShareScheduleSectionControllerDelegate> * _delegate;
    NSDateFormatter * _formatter;
    bool  _isDisabled;
    bool  _isEditable;
    PKPassShareTimeConfiguration * _possibleTimeConfiguration;
    NSMutableDictionary * _tags;
}

@property (nonatomic, retain) PKPassShareTimeConfiguration *configuration;
@property (nonatomic) bool isDisabled;

- (void).cxx_destruct;
- (id)_formattedDate:(id)arg1;
- (void)_updateRowsIfNecessary;
- (id)cellRegistrationForItem:(id)arg1;
- (id)configuration;
- (id)decorateCell:(id)arg1 forScheduleRowItem:(id)arg2;
- (void)decorateDayPicker:(id)arg1 forScheduleRowItem:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)initWithConfiguration:(id)arg1 possibleTimeConfiguration:(id)arg2 isEditable:(bool)arg3 isDisabled:(bool)arg4 delegate:(id)arg5;
- (bool)isDisabled;
- (void)setConfiguration:(id)arg1;
- (void)setIsDisabled:(bool)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)timePickerValueDidChange:(id)arg1;
- (void)toggleValueChanged:(id)arg1;
- (void)weekdaySelector:(id)arg1 didUpdateSelectedWeekdays:(id)arg2;

@end
