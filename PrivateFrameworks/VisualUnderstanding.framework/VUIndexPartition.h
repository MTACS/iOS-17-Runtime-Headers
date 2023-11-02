
@interface VUIndexPartition : NSManagedObject

@property (nonatomic, copy) NSData *centroid;
@property (nonatomic) int partition;
@property (nonatomic) short type;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
