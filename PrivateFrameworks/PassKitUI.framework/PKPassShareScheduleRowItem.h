
@interface PKPassShareScheduleRowItem : NSObject <PKIdentifiable> {
    UIListContentConfiguration * _configuration;
    NSDate * _date;
    bool  _hasDayPicker;
    bool  _hasTimePicker;
    bool  _hasToggle;
    UIImage * _icon;
    NSString * _identifier;
    bool  _isOn;
    NSDate * _maximumDate;
    NSDate * _minimumDate;
    bool  _selectable;
    NSString * _subtitle;
    NSString * _title;
    bool  _userInteractionEnabled;
    NSString * _value;
}

@property (nonatomic, retain) UIListContentConfiguration *configuration;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDayPicker;
@property (nonatomic) bool hasTimePicker;
@property (nonatomic) bool hasToggle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isOn;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool userInteractionEnabled;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)configuration;
- (id)date;
- (bool)hasDayPicker;
- (bool)hasTimePicker;
- (bool)hasToggle;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassShareScheduleRowItem:(id)arg1;
- (bool)isOn;
- (bool)isSelectable;
- (id)maximumDate;
- (id)minimumDate;
- (void)setConfiguration:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setHasDayPicker:(bool)arg1;
- (void)setHasTimePicker:(bool)arg1;
- (void)setHasToggle:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsOn:(bool)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)subtitle;
- (id)title;
- (bool)userInteractionEnabled;
- (id)value;

@end
