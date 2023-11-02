
@interface STUIStatusBarTimeItem : STUIStatusBarItem {
    STUIStatusBarStringView * _dateView;
    STUIStatusBarStringView * _pillTimeView;
    STUIStatusBarStringView * _shortTimeView;
    STUIStatusBarStringView * _timeView;
}

@property (nonatomic, retain) STUIStatusBarStringView *dateView;
@property (nonatomic, retain) STUIStatusBarStringView *pillTimeView;
@property (nonatomic, retain) STUIStatusBarStringView *shortTimeView;
@property (nonatomic, retain) STUIStatusBarStringView *timeView;

+ (id)dateDisplayIdentifier;
+ (id)pillTimeDisplayIdentifier;
+ (id)shortTimeDisplayIdentifier;
+ (id)timeDisplayIdentifier;

- (void).cxx_destruct;
- (void)_create_dateView;
- (void)_create_pillTimeView;
- (void)_create_shortTimeView;
- (void)_create_timeView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dateView;
- (id)dependentEntryKeys;
- (id)pillTimeView;
- (void)setDateView:(id)arg1;
- (void)setPillTimeView:(id)arg1;
- (void)setShortTimeView:(id)arg1;
- (void)setTimeView:(id)arg1;
- (id)shortTimeView;
- (id)timeView;
- (id)viewForIdentifier:(id)arg1;

@end
