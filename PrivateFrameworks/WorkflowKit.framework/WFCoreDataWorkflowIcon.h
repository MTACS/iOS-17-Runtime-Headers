
@interface WFCoreDataWorkflowIcon : NSManagedObject

@property (nonatomic) long long backgroundColorValue;
@property (nonatomic, retain) WFCoreDataCollection *collection;
@property (nonatomic) long long glyphNumber;
@property (nonatomic, retain) WFCoreDataWorkflow *workflow;

+ (id)fetchRequest;

@end
