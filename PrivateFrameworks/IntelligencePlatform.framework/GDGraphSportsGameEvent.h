
@interface GDGraphSportsGameEvent : NSObject <GDGraphObject> {
    NSArray * _allDate;
    NSArray * _allEndLocation;
    NSArray * _allName;
    NSArray * _allStartLocation;
    NSArray * _cooccurringEvents;
    GDGraphDateRelationship * _date;
    GDGraphLocationEntityIdentifier * _endLocation;
    GDGraphSportsGameEventEntityIdentifier * _entityIdentifier;
    NSArray * _eventTypes;
    NSArray * _locations;
    NSString * _name;
    GDGraphLocationEntityIdentifier * _startLocation;
    NSArray * _teams;
}

@property (nonatomic, readonly, copy) NSArray *allDate;
@property (nonatomic, readonly, copy) NSArray *allEndLocation;
@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSArray *allStartLocation;
@property (nonatomic, readonly, copy) NSArray *cooccurringEvents;
@property (nonatomic, readonly, copy) GDGraphDateRelationship *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphLocationEntityIdentifier *endLocation;
@property (nonatomic, readonly, copy) GDGraphSportsGameEventEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) NSArray *eventTypes;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *locations;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) GDGraphLocationEntityIdentifier *startLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *teams;

- (void).cxx_destruct;
- (id)allDate;
- (id)allEndLocation;
- (id)allName;
- (id)allStartLocation;
- (id)cooccurringEvents;
- (id)date;
- (id)endLocation;
- (id)entityIdentifier;
- (id)eventTypes;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 eventTypesField:(id)arg2 nameField:(id)arg3 dateField:(id)arg4 cooccurringEventsField:(id)arg5 locationsField:(id)arg6 startLocationField:(id)arg7 endLocationField:(id)arg8 teamsField:(id)arg9 allNameField:(id)arg10 allDateField:(id)arg11 allStartLocationField:(id)arg12 allEndLocationField:(id)arg13;
- (id)locations;
- (id)name;
- (id)startLocation;
- (id)teams;

@end
