
@interface GDGraphActivityEvent : NSObject <GDGraphObject> {
    NSNumber * _activityType;
    GDGraphActivityEventTypeEntityIdentifier * _activityTypeObject;
    NSArray * _allActivityType;
    NSArray * _allActivityTypeObject;
    NSArray * _allConfidence;
    NSArray * _allDate;
    NSArray * _allEndLocation;
    NSArray * _allName;
    NSArray * _allStartLocation;
    NSArray * _attendees;
    NSNumber * _confidence;
    NSArray * _cooccurringEvents;
    GDGraphDateRelationship * _date;
    GDGraphLocationEntityIdentifier * _endLocation;
    GDGraphActivityEventEntityIdentifier * _entityIdentifier;
    NSArray * _eventTypes;
    NSArray * _locations;
    NSString * _name;
    GDGraphLocationEntityIdentifier * _startLocation;
    NSArray * _subEvents;
}

@property (nonatomic, readonly, copy) NSNumber *activityType;
@property (nonatomic, readonly, copy) GDGraphActivityEventTypeEntityIdentifier *activityTypeObject;
@property (nonatomic, readonly, copy) NSArray *allActivityType;
@property (nonatomic, readonly, copy) NSArray *allActivityTypeObject;
@property (nonatomic, readonly, copy) NSArray *allConfidence;
@property (nonatomic, readonly, copy) NSArray *allDate;
@property (nonatomic, readonly, copy) NSArray *allEndLocation;
@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSArray *allStartLocation;
@property (nonatomic, readonly, copy) NSArray *attendees;
@property (nonatomic, readonly, copy) NSNumber *confidence;
@property (nonatomic, readonly, copy) NSArray *cooccurringEvents;
@property (nonatomic, readonly, copy) GDGraphDateRelationship *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphLocationEntityIdentifier *endLocation;
@property (nonatomic, readonly, copy) GDGraphActivityEventEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) NSArray *eventTypes;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *locations;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) GDGraphLocationEntityIdentifier *startLocation;
@property (nonatomic, readonly, copy) NSArray *subEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityType;
- (id)activityTypeObject;
- (id)allActivityType;
- (id)allActivityTypeObject;
- (id)allConfidence;
- (id)allDate;
- (id)allEndLocation;
- (id)allName;
- (id)allStartLocation;
- (id)attendees;
- (id)confidence;
- (id)cooccurringEvents;
- (id)date;
- (id)endLocation;
- (id)entityIdentifier;
- (id)eventTypes;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 eventTypesField:(id)arg2 nameField:(id)arg3 dateField:(id)arg4 attendeesField:(id)arg5 cooccurringEventsField:(id)arg6 subEventsField:(id)arg7 locationsField:(id)arg8 startLocationField:(id)arg9 endLocationField:(id)arg10 activityTypeObjectField:(id)arg11 activityTypeField:(id)arg12 confidenceField:(id)arg13 allNameField:(id)arg14 allDateField:(id)arg15 allStartLocationField:(id)arg16 allEndLocationField:(id)arg17 allActivityTypeObjectField:(id)arg18 allActivityTypeField:(id)arg19 allConfidenceField:(id)arg20;
- (id)locations;
- (id)name;
- (id)startLocation;
- (id)subEvents;

@end
