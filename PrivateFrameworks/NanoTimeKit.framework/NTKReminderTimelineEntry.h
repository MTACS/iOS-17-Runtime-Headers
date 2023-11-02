
@interface NTKReminderTimelineEntry : NTKTimelineEntryModel {
    bool  _displayAsConflicting;
    NSDate * _dueDate;
    unsigned long long  _overlappingReminderCount;
    NSString * _primaryReminderId;
    UIColor * _primaryReminderParentListColor;
    NSString * _primaryReminderTitle;
    NSString * _secondaryReminderTitle;
}

@property (nonatomic) bool displayAsConflicting;
@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic) unsigned long long overlappingReminderCount;
@property (nonatomic, retain) NSString *primaryReminderId;
@property (nonatomic, retain) UIColor *primaryReminderParentListColor;
@property (nonatomic, retain) NSString *primaryReminderTitle;
@property (nonatomic, retain) NSString *secondaryReminderTitle;

+ (id)_analogReminderImageProvider;
+ (id)_cornerReminderImageProvider;
+ (id)_reminderImageAnalog;
+ (id)_reminderImageCorner;
+ (id)loadingEntryForFamily:(long long)arg1;
+ (id)lockedEntryForFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_createLargeModularTemplate;
- (id)_createLargeUtilityTemplate;
- (id)_createSignatureCornerTemplate;
- (id)description;
- (bool)displayAsConflicting;
- (id)dueDate;
- (unsigned long long)overlappingReminderCount;
- (id)primaryReminderId;
- (id)primaryReminderParentListColor;
- (id)primaryReminderTitle;
- (id)secondaryReminderTitle;
- (void)setDisplayAsConflicting:(bool)arg1;
- (void)setDueDate:(id)arg1;
- (void)setOverlappingReminderCount:(unsigned long long)arg1;
- (void)setPrimaryReminderId:(id)arg1;
- (void)setPrimaryReminderParentListColor:(id)arg1;
- (void)setPrimaryReminderTitle:(id)arg1;
- (void)setSecondaryReminderTitle:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end
