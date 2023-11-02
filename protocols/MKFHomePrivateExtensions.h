
@protocol MKFHomePrivateExtensions

@required

- (_MKFAccessory *)accessoryWithModelID:(NSUUID *)arg1 context:(NSManagedObjectContext *)arg2;
- (bool)residentSyncClientDidSync;

@end
