
@interface _DKKeyValueMO : NSManagedObject

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSObject *value;

+ (id)fetchRequest;

@end
