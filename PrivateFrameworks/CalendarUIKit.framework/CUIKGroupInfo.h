
@interface CUIKGroupInfo : NSObject {
    unsigned long long  _accountError;
    NSMutableArray * _calendars;
    unsigned long long  _customGroupType;
    NSString * _customTitle;
    NSString * _customTitleAtBeginningOfSentence;
    NSString * _footer;
    bool  _selected;
    bool  _showAccountErrorActionButton;
    bool  _showSelectAllButton;
    EKSource * _source;
    NSString * _title;
    NSString * _titleForBeginningOfSentence;
    NSString * _typeTitle;
}

@property (nonatomic) unsigned long long accountError;
@property (nonatomic, readonly, retain) NSArray *calendarInfos;
@property (nonatomic, readonly, copy) NSSet *calendarSet;
@property (nonatomic, retain) NSString *footer;
@property (nonatomic, readonly) bool isSubscribed;
@property (nonatomic, readonly) unsigned long long numCalendars;
@property (nonatomic, readonly) unsigned long long numSelectableCalendars;
@property (nonatomic, readonly) unsigned long long numSelectedCalendars;
@property (nonatomic) bool selected;
@property (nonatomic, readonly, copy) NSSet *selectedCalendarSet;
@property (nonatomic) bool showAccountErrorActionButton;
@property (nonatomic, readonly) bool showAddCalendarButton;
@property (nonatomic, readonly) bool showCalendarNameIfSolitary;
@property (nonatomic) bool showSelectAllButton;
@property (nonatomic, readonly) int sortOrder;
@property (nonatomic, retain) EKSource *source;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *typeTitle;

- (void).cxx_destruct;
- (unsigned long long)accountError;
- (id)calendarAtIndex:(unsigned long long)arg1;
- (id)calendarInfos;
- (id)calendarSet;
- (id)copyCalendars;
- (id)description;
- (id)footer;
- (id)init;
- (id)initWithCustomGroupType:(unsigned long long)arg1;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (bool)isSubscribed;
- (unsigned long long)numCalendars;
- (unsigned long long)numSelectableCalendars;
- (unsigned long long)numSelectedCalendars;
- (void)removeCalendar:(id)arg1;
- (void)selectAll;
- (void)selectNone;
- (bool)selected;
- (id)selectedCalendarSet;
- (void)setAccountError:(unsigned long long)arg1;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (void)setFooter:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowAccountErrorActionButton:(bool)arg1;
- (void)setShowSelectAllButton:(bool)arg1;
- (void)setSource:(id)arg1;
- (bool)showAccountErrorActionButton;
- (bool)showAddCalendarButton;
- (bool)showCalendarNameIfSolitary;
- (bool)showSelectAllButton;
- (int)sortOrder;
- (id)source;
- (id)title;
- (id)titleForBeginningOfSentence:(bool)arg1;
- (id)typeTitle;

@end
