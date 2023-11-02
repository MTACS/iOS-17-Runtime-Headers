
@protocol HMDPersonCoreDataManagerDelegate <NSObject>

@required

- (void)coreDataManager:(HMDPersonCoreDataManager *)arg1 didRemovePersonsWithUUIDs:(NSSet *)arg2;
- (void)coreDataManager:(HMDPersonCoreDataManager *)arg1 didUpdatePersons:(NSSet *)arg2;

@end
