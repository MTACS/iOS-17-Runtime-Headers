
@interface CalDAVScheduleChangesProperty : NSObject {
    int  _actionType;
    NSString * _attendeeAddress;
    NSString * _dateStamp;
    CalDAVOccurrenceChange * _masterChange;
    NSMutableDictionary * _occurrenceChanges;
}

@property (nonatomic) int actionType;
@property (nonatomic, retain) NSString *attendeeAddress;
@property (nonatomic, retain) NSString *dateStamp;
@property (nonatomic, readonly) bool isCancel;
@property (nonatomic, readonly) bool isCreate;
@property (nonatomic, readonly) bool isReply;
@property (nonatomic, readonly) bool isUpdate;
@property (nonatomic, retain) CalDAVOccurrenceChange *masterChange;
@property (nonatomic, retain) NSMutableDictionary *occurrenceChanges;
@property (nonatomic, readonly) NSArray *recurrenceIDs;

+ (id)debugStringForType:(int)arg1;
+ (id)propertyWithItem:(id)arg1;

- (void).cxx_destruct;
- (int)actionType;
- (void)addOccurrenceChange:(id)arg1;
- (id)attendeeAddress;
- (id)changeForOccurrence:(id)arg1;
- (id)dateStamp;
- (id)init;
- (bool)isCancel;
- (bool)isCreate;
- (bool)isReply;
- (bool)isUpdate;
- (id)masterChange;
- (id)occurrenceChanges;
- (id)recurrenceIDs;
- (void)setActionType:(int)arg1;
- (void)setAttendeeAddress:(id)arg1;
- (void)setDateStamp:(id)arg1;
- (void)setMasterChange:(id)arg1;
- (void)setOccurrenceChanges:(id)arg1;

@end
