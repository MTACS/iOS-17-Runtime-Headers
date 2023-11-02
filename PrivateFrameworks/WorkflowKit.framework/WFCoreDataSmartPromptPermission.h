
@interface WFCoreDataSmartPromptPermission : NSManagedObject

@property (nonatomic, copy) NSString *actionUUID;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;

@end
