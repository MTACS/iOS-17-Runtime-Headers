
@protocol PFObjectIDCollection <NSObject>

@required

- (NSArray *)arrayFromObjectIDs;
- (unsigned long long)indexOfManagedObjectForObjectID:(NSManagedObjectID *)arg1;
- (NSManagedObjectID *)managedObjectIDAtIndex:(unsigned long long)arg1;
- (NSArray *)newArrayFromObjectIDs;

@end
