
@interface ManagedSyncZoneChangeWindow : NSManagedObject

@property (nonatomic, copy) NSData *changeWindow;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
