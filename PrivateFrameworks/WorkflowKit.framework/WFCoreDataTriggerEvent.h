
@interface WFCoreDataTriggerEvent : NSManagedObject <WFRecordStorage>

@property (nonatomic) bool confirmed;
@property (nonatomic, copy) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *eventInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFCoreDataTrigger *trigger;

+ (id)fetchRequest;

- (id)descriptor;

@end
