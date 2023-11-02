
@interface WFPersistedSerializedParameters : NSManagedObject

@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *queryName;

+ (id)fetchRequest;

@end
