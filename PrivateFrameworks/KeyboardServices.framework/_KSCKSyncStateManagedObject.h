
@interface _KSCKSyncStateManagedObject : NSManagedObject

@property (nonatomic) bool didPullOnce;
@property (nonatomic, retain) NSData *fetchChangeToken;

@end
