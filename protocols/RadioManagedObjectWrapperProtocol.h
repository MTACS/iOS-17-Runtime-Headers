
@protocol RadioManagedObjectWrapperProtocol <NSObject>

@required

- (id)initWithModel:(RadioModel *)arg1 managedObject:(NSManagedObject *)arg2;
- (bool)isDatabaseBacked;
- (NSManagedObject *)managedObject;
- (RadioModel *)model;

@end
