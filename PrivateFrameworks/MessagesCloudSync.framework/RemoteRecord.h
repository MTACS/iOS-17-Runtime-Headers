
@interface RemoteRecord : NSManagedObject

@property (nonatomic, copy) NSString *changeTag;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) RemoteRecordData *data;
@property (nonatomic, copy) NSDate *dateRead;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *modifiedByDevice;
@property (nonatomic, copy) NSString *recordName;
@property (nonatomic, copy) NSString *recordType;
@property (nonatomic) int statusValue;
@property (nonatomic, copy) NSString *zoneName;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
