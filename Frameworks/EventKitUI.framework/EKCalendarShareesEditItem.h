
@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareePickerViewControllerDelegate, EKShareeViewControllerDelegate> {
    UILabel * _descriptionLabel;
    NSMutableArray * _shareeCells;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *shareeCells;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addPersonCell;
- (void)_dismissShareePicker;
- (void)_popBackToCalendarEditor:(bool)arg1;
- (id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3;
- (id)_stringForShareeAccessLevel:(unsigned long long)arg1;
- (id)_stringForShareeStatus:(unsigned long long)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)eventStoreForShareePickerViewController:(id)arg1;
- (id)footerTitle;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setShareeCells:(id)arg1;
- (id)shareeCells;
- (void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewControllerDidChangeAccessLevel:(id)arg1;

@end
