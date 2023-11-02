
@interface WFCoreDataTrustedDomain : NSManagedObject

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) WFCoreDataWorkflow *shortcut;

+ (id)fetchRequest;

@end
