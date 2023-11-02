
@protocol NSSQLModelProvider

@required

- (NSDictionary *)ancillaryModels;
- (NSDictionary *)ancillarySQLModels;
- (NSSQLModel *)model;
- (NSManagedObjectID *)newObjectIDForEntity:(NSSQLEntity *)arg1 pk:(long long)arg2;

@end
