
@interface CADExpandedNotification : CADNotification {
    CADObjectID * _attendeeObjectID;
}

@property (nonatomic, retain) CADObjectID *attendeeObjectID;

- (void).cxx_destruct;
- (id)attendeeObjectID;
- (bool)expanded;
- (id)initWithType:(int)arg1 objectID:(id)arg2 occurrenceDate:(double)arg3 expirationDate:(double)arg4 attendeeObjectID:(id)arg5;
- (void)setAttendeeObjectID:(id)arg1;

@end
