
@interface PFCRShare : NSManagedObject

@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic, retain) NSSet *participants;
@property (nonatomic, retain) NSString *recordName;
@property (nonatomic, retain) NSString *zoneName;

@end
