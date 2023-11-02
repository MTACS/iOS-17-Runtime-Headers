
@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (nonatomic, copy) NSDate *importDate;
@property (nonatomic, copy) NSString *sourceAppIdentifier;
@property (nonatomic, retain) WFCoreDataWorkflow *workflow;

+ (id)fetchRequest;

@end
