
@interface SYUserActivityRecord : NSManagedObject

@property (nonatomic, copy) NSString *relatedUniqueIdentifier;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, retain) NSData *userActivityData;

+ (id)createFetchRequest;

@end
