
@interface DRSLogMO : NSManagedObject

@property (nonatomic, retain) DRSRequestMO *parentRequest;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) long long size;
@property (nonatomic) bool transferOwnership;

+ (id)fetchRequest;

@end
