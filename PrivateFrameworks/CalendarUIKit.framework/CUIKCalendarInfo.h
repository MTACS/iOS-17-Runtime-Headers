
@interface CUIKCalendarInfo : NSObject {
    EKCalendar * _calendar;
    UIColor * _color;
    unsigned long long  _customGroupType;
    bool  _filteredByFocus;
    CUIKGroupInfo * _group;
    bool  _isEnabled;
    bool  _selected;
    NSString * _title;
}

@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) unsigned long long customGroupType;
@property (nonatomic, readonly) int displayOrder;
@property (nonatomic) bool filteredByFocus;
@property (nonatomic) CUIKGroupInfo *group;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) bool isPublished;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) bool isSubscribed;
@property (nonatomic) bool selected;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)_updateCustomGroupType;
- (id)calendar;
- (id)color;
- (unsigned long long)customGroupType;
- (id)description;
- (int)displayOrder;
- (bool)filteredByFocus;
- (id)group;
- (id)initWithCalendar:(id)arg1;
- (bool)isEditable;
- (bool)isEnabled;
- (bool)isPublished;
- (bool)isShared;
- (bool)isSubscribed;
- (bool)selected;
- (void)setCalendar:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCustomGroupType:(unsigned long long)arg1;
- (void)setFilteredByFocus:(bool)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (id)stringForSharedCalendar;
- (id)title;

@end
