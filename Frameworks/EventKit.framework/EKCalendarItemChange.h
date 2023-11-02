
@interface EKCalendarItemChange : EKObjectChange {
    bool  _allDayChanged;
    EKObjectID * _calendarID;
    bool  _endDateChanged;
    bool  _endTimezoneChanged;
    NSString * _externalID;
    bool  _locationChanged;
    bool  _notesChanged;
    EKObjectID * _oldCalendarID;
    NSString * _oldExternalID;
    bool  _startDateChanged;
    bool  _startTimezoneChanged;
    bool  _suppressNotificationForChanges;
    bool  _titleChanged;
    NSString * _uniqueID;
    NSString * _uuid;
}

@property (nonatomic, readonly) bool allDayChanged;
@property (nonatomic, readonly) EKObjectID *calendarID;
@property (nonatomic, readonly) bool endDateChanged;
@property (nonatomic, readonly) bool endTimezoneChanged;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) bool locationChanged;
@property (nonatomic, readonly) bool notesChanged;
@property (nonatomic, readonly) EKObjectID *oldCalendarID;
@property (nonatomic, readonly) NSString *oldExternalID;
@property (nonatomic, readonly) bool startDateChanged;
@property (nonatomic, readonly) bool startTimezoneChanged;
@property (nonatomic, readonly) bool suppressNotificationForChanges;
@property (nonatomic, readonly) bool titleChanged;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *uuid;

+ (int)entityType;

- (void).cxx_destruct;
- (bool)allDayChanged;
- (id)calendarID;
- (bool)endDateChanged;
- (bool)endTimezoneChanged;
- (id)externalID;
- (id)initWithChangeProperties:(id)arg1;
- (bool)locationChanged;
- (bool)notesChanged;
- (id)oldCalendarID;
- (id)oldExternalID;
- (bool)startDateChanged;
- (bool)startTimezoneChanged;
- (bool)suppressNotificationForChanges;
- (bool)titleChanged;
- (id)uniqueID;
- (id)uuid;

@end
