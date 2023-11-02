
@interface AXSS_PunctuationCloudDeletionCache : NSManagedObject

@property (nonatomic, copy) NSString *entityType;
@property (nonatomic, copy) NSUUID *uuid;

+ (id)fetchRequest;

@end
