
@protocol CNCDContainerPredicate <NSObject>

@required

- (NSPredicate *)cn_coreDataPredicate;
- (NSFetchRequest *)cn_persistenceFilterRequest;
- (NSPredicate *)cn_topLevelFilter;

@optional

- (NSPredicate *)cn_secondaryRecursePredicate;

@end
