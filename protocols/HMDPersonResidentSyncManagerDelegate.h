
@protocol HMDPersonResidentSyncManagerDelegate <NSObject>

@required

- (NAFuture *)addOrUpdatePersons:(NSSet *)arg1 andRemovePersonsWithUUIDs:(NSSet *)arg2;
- (NAFuture *)removeAllAssociatedData;

@end
