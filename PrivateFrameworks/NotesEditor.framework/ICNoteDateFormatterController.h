
@interface ICNoteDateFormatterController : NSObject {
    long long  _currentSortType;
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    <ICNoteDateFormatterControllerDelegate> * _delegate;
    bool  _didManuallyChangeDateType;
    bool  _iconHidden;
    ICNote * _note;
    NSDateFormatter * _shortDateFormatter;
    bool  _shouldShowSharedNoteTitle;
    bool  _showAlternateDateView;
}

@property (nonatomic) long long currentSortType;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic) <ICNoteDateFormatterControllerDelegate> *delegate;
@property (nonatomic) bool didManuallyChangeDateType;
@property (nonatomic) bool iconHidden;
@property (nonatomic) ICNote *note;
@property (nonatomic, retain) NSDateFormatter *shortDateFormatter;
@property (nonatomic, readonly) bool shouldShowDateModified;
@property (nonatomic) bool shouldShowSharedNoteTitle;
@property (nonatomic) bool showAlternateDateView;

- (void).cxx_destruct;
- (long long)currentSortType;
- (id)date;
- (id)dateFormatter;
- (id)dateStringForDate:(id)arg1 dateFormatter:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)didManuallyChangeDateType;
- (bool)iconHidden;
- (id)init;
- (id)note;
- (void)noteDecryptedStatusDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCurrentSortType:(long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidManuallyChangeDateType:(bool)arg1;
- (void)setIconHidden:(bool)arg1;
- (void)setNote:(id)arg1;
- (void)setShortDateFormatter:(id)arg1;
- (void)setShouldShowSharedNoteTitle:(bool)arg1;
- (void)setShowAlternateDateView:(bool)arg1;
- (void)setUp;
- (id)shortDateFormatter;
- (bool)shouldShowDateModified;
- (bool)shouldShowSharedNoteTitle;
- (bool)showAlternateDateView;
- (void)timeFormatChanged:(id)arg1;
- (void)toggleVisibleDateType;
- (void)updateDate;
- (void)updateDateLabelAccessibilityHint;
- (void)updateLockIcon;

@end
