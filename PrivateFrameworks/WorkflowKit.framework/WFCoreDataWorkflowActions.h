
@interface WFCoreDataWorkflowActions : NSManagedObject

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;

@end
