
@interface GDGraphCalendarEvent : NSObject <GDGraphObject> {
    NSArray * _allIsAllDay;
    NSArray * _allName;
    NSArray * _attendees;
    NSArray * _dates;
    GDGraphCalendarEventEntityIdentifier * _entityIdentifier;
    NSArray * _identifiers;
    NSNumber * _isAllDay;
    NSArray * _locations;
    NSString * _name;
    NSArray * _organizers;
    NSArray * _sgeventType;
}

@property (nonatomic, readonly, copy) NSArray *allIsAllDay;
@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSArray *attendees;
@property (nonatomic, readonly, copy) NSArray *dates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphCalendarEventEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (nonatomic, readonly, copy) NSNumber *isAllDay;
@property (nonatomic, readonly, copy) NSArray *locations;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *organizers;
@property (nonatomic, readonly, copy) NSArray *sgeventType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allIsAllDay;
- (id)allName;
- (id)attendees;
- (id)dates;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)identifiers;
- (id)initWithEntityIdentifierField:(id)arg1 nameField:(id)arg2 datesField:(id)arg3 isAllDayField:(id)arg4 identifiersField:(id)arg5 attendeesField:(id)arg6 organizersField:(id)arg7 locationsField:(id)arg8 sgeventTypeField:(id)arg9 allNameField:(id)arg10 allIsAllDayField:(id)arg11;
- (id)isAllDay;
- (id)locations;
- (id)name;
- (id)organizers;
- (id)sgeventType;

@end
