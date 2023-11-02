
@interface NSCKEvent : NSManagedObject

@property (nonatomic) long long cloudKitEventType;
@property (nonatomic) long long countAffectedObjects;
@property (nonatomic) long long countFinishedObjects;
@property (nonatomic, retain) NSDate *endedAt;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, retain) NSUUID *eventIdentifier;
@property (nonatomic, retain) NSDate *startedAt;
@property (nonatomic) bool succeeded;

+ (id)entityPath;

@end
