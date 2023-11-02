
@interface PKPassShareSelectDateSectionController : PKPassShareSectionController <PKDateSelectorCollectionViewCellDelegate> {
    NSDate * _date;
    <PKPassShareSelectDateSectionControllerDelegate> * _delegate;
    NSDate * _maximumDate;
    NSDate * _minimumDate;
    bool  _selected;
}

@property (nonatomic) <PKPassShareSelectDateSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_setDate:(id)arg1;
- (void)_setSelected:(id)arg1;
- (id)cellRegistrationForItem:(id)arg1;
- (void)dateSelectorCollectionViewCell:(id)arg1 didUpdateDate:(id)arg2;
- (void)decorateCalendarCell:(id)arg1;
- (id)decorateListCell:(id)arg1 forScheduleRowItem:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)initWithDate:(id)arg1 minimumDate:(id)arg2 maximumDate:(id)arg3 delegate:(id)arg4;
- (void)reloadItemsAnimated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;

@end
