
@interface STScreenTimeSettings : NSManagedObject

@property (nonatomic) bool cloudSyncEnabled;
@property (nonatomic) bool screenTimeEnabled;

+ (id)fetchScreenTimeSettingsInContext:(id)arg1 error:(id*)arg2;

@end
