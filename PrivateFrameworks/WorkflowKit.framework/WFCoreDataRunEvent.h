
@interface WFCoreDataRunEvent : NSManagedObject <WFRecordStorage>

@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int outcome;
@property (nonatomic, retain) WFCoreDataWorkflow *shortcut;
@property (nonatomic, copy) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFCoreDataTrigger *trigger;

+ (id)fetchRequest;

- (id)descriptor;

@end
