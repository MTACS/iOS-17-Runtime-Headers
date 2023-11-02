
@interface CalDAVOccurrenceChange : NSObject {
    NSMutableDictionary * _changes;
    bool  _isMaster;
    ICSDate * _recurrenceID;
}

@property (nonatomic, readonly) bool attachmentsChanged;
@property (nonatomic, readonly) bool attendeesChanged;
@property (nonatomic, retain) NSMutableDictionary *changes;
@property (nonatomic, readonly) bool dateTimeChanged;
@property (nonatomic, readonly) bool descriptionChanged;
@property (nonatomic, readonly) bool endTimeChanged;
@property (nonatomic) bool isMaster;
@property (nonatomic, readonly) bool locationChanged;
@property (nonatomic, readonly) bool participationChanged;
@property (nonatomic, readonly) bool privateCommentChanged;
@property (nonatomic, readonly) bool proposedStartDateChanged;
@property (nonatomic, readonly) bool recurrenceChanged;
@property (nonatomic, retain) ICSDate *recurrenceID;
@property (nonatomic, readonly) bool startTimeChanged;
@property (nonatomic, readonly) bool statusChanged;
@property (nonatomic, readonly) bool summaryChanged;
@property (nonatomic, readonly) bool timeZoneChanged;
@property (nonatomic, readonly) bool urlChanged;

+ (id)changeWithItem:(id)arg1;
+ (id)changeWithOccurrenceID:(id)arg1;

- (void).cxx_destruct;
- (void)addChangedParameter:(id)arg1 ofProperty:(id)arg2;
- (void)addChangedProperty:(id)arg1;
- (bool)attachmentsChanged;
- (bool)attendeesChanged;
- (id)changes;
- (bool)dateTimeChanged;
- (bool)descriptionChanged;
- (bool)didParameterChange:(id)arg1 onProperty:(id)arg2;
- (bool)didPropertyChange:(id)arg1;
- (bool)endTimeChanged;
- (id)init;
- (id)initWithOccurrenceID:(id)arg1;
- (bool)isMaster;
- (bool)locationChanged;
- (bool)participationChanged;
- (bool)privateCommentChanged;
- (bool)proposedStartDateChanged;
- (bool)recurrenceChanged;
- (id)recurrenceID;
- (void)setChanges:(id)arg1;
- (void)setIsMaster:(bool)arg1;
- (void)setRecurrenceID:(id)arg1;
- (bool)startTimeChanged;
- (bool)statusChanged;
- (bool)summaryChanged;
- (bool)timeZoneChanged;
- (bool)urlChanged;

@end
