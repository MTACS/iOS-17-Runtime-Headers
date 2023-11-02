
@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding> {
    NSString * _attendeeEmailAddress;
    bool  _attendeeRole;
    bool  _attendeeStatus;
    EKObjectID * _ownerID;
}

@property (nonatomic, readonly) NSString *attendeeEmailAddress;
@property (nonatomic, readonly) bool attendeeRole;
@property (nonatomic, readonly) bool attendeeStatus;
@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)attendeeEmailAddress;
- (bool)attendeeRole;
- (bool)attendeeStatus;
- (id)initWithChangeProperties:(id)arg1;
- (id)ownerID;

@end
