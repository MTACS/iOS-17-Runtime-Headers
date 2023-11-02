
@interface GDGraphBehaviorActivityEvent : NSObject <GDGraphObject> {
    NSNumber * _activityType;
    GDGraphActivityEventTypeEntityIdentifier * _activityTypeObject;
    NSArray * _allActivityType;
    NSArray * _allActivityTypeObject;
    NSArray * _allBehaviorType;
    NSArray * _allConfidence;
    NSArray * _allDate;
    NSArray * _allEndLocation;
    NSArray * _allName;
    NSArray * _allStartLocation;
    NSArray * _attendees;
    NSString * _behaviorType;
    NSNumber * _confidence;
    GDGraphDateRelationship * _date;
    GDGraphLocationEntityIdentifier * _endLocation;
    GDGraphBehaviorActivityEventEntityIdentifier * _entityIdentifier;
    NSArray * _locations;
    NSString * _name;
    GDGraphLocationEntityIdentifier * _startLocation;
}

@property (nonatomic, readonly, copy) NSNumber *activityType;
@property (nonatomic, readonly, copy) GDGraphActivityEventTypeEntityIdentifier *activityTypeObject;
@property (nonatomic, readonly, copy) NSArray *allActivityType;
@property (nonatomic, readonly, copy) NSArray *allActivityTypeObject;
@property (nonatomic, readonly, copy) NSArray *allBehaviorType;
@property (nonatomic, readonly, copy) NSArray *allConfidence;
@property (nonatomic, readonly, copy) NSArray *allDate;
@property (nonatomic, readonly, copy) NSArray *allEndLocation;
@property (nonatomic, readonly, copy) NSArray *allName;
@property (nonatomic, readonly, copy) NSArray *allStartLocation;
@property (nonatomic, readonly, copy) NSArray *attendees;
@property (nonatomic, readonly, copy) NSString *behaviorType;
@property (nonatomic, readonly, copy) NSNumber *confidence;
@property (nonatomic, readonly, copy) GDGraphDateRelationship *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) GDGraphLocationEntityIdentifier *endLocation;
@property (nonatomic, readonly, copy) GDGraphBehaviorActivityEventEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *locations;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) GDGraphLocationEntityIdentifier *startLocation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityType;
- (id)activityTypeObject;
- (id)allActivityType;
- (id)allActivityTypeObject;
- (id)allBehaviorType;
- (id)allConfidence;
- (id)allDate;
- (id)allEndLocation;
- (id)allName;
- (id)allStartLocation;
- (id)attendees;
- (id)behaviorType;
- (id)confidence;
- (id)date;
- (id)endLocation;
- (id)entityIdentifier;
- (Class)graphObjectType;
- (id)initWithEntityIdentifierField:(id)arg1 nameField:(id)arg2 dateField:(id)arg3 attendeesField:(id)arg4 locationsField:(id)arg5 startLocationField:(id)arg6 endLocationField:(id)arg7 activityTypeObjectField:(id)arg8 activityTypeField:(id)arg9 confidenceField:(id)arg10 behaviorTypeField:(id)arg11 allNameField:(id)arg12 allDateField:(id)arg13 allStartLocationField:(id)arg14 allEndLocationField:(id)arg15 allActivityTypeObjectField:(id)arg16 allActivityTypeField:(id)arg17 allConfidenceField:(id)arg18 allBehaviorTypeField:(id)arg19;
- (id)locations;
- (id)name;
- (id)startLocation;

@end
