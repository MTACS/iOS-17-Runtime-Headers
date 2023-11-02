
@interface RemoteRecordData : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) RemoteRecord *parent;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
