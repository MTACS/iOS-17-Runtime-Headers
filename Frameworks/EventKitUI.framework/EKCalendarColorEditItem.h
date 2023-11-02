
@interface EKCalendarColorEditItem : EKCalendarEditItem <EKCalendarColorEditItemDelegate, UIColorPickerViewControllerDelegate> {
    NSMutableArray * _cells;
    unsigned long long  _checkedRow;
    <EKCalendarColorEditItemDelegate> * _colorEditItemDelegate;
    UIColorPickerViewController * _customColorPicker;
    bool  _layoutInline;
    EKCalendarColorViewController * _layoutInlineViewController;
}

@property (nonatomic) <EKCalendarColorEditItemDelegate> *colorEditItemDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool layoutInline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cellForSymbolicColor:(id)arg1;
- (id)_cellWithText:(id)arg1;
- (id)_checkmarkCellForCustomColor:(id)arg1;
- (void)_setInitialColorOnCalendar;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cells;
- (id)colorEditItemDelegate;
- (void)colorPickerViewControllerDidSelectColor:(id)arg1;
- (bool)configureWithCalendar:(id)arg1;
- (void)editItemSelectedColor:(id)arg1 symbolicName:(id)arg2;
- (id)headerTitle;
- (unsigned long long)lastSubitemIndex;
- (bool)layoutInline;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)setColorEditItemDelegate:(id)arg1;
- (void)setLayoutInline:(bool)arg1;

@end
