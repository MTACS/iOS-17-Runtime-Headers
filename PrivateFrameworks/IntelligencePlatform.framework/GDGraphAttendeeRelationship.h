
@interface GDGraphAttendeeRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allAttendeeId;
    NSArray * _allEventParticipationType;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _attendeeId;
    NSString * _eventParticipationType;
}

@property (nonatomic, readonly, copy) NSArray *allAttendeeId;
@property (nonatomic, readonly, copy) NSArray *allEventParticipationType;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *attendeeId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *eventParticipationType;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allAttendeeId;
- (id)allEventParticipationType;
- (id)attendeeId;
- (id)eventParticipationType;
- (Class)graphObjectType;
- (id)initWithEventParticipationTypeField:(id)arg1 attendeeIdField:(id)arg2 allEventParticipationTypeField:(id)arg3 allAttendeeIdField:(id)arg4;

@end
