
@interface HFMutableStateDumpBuilderContext : HFStateDumpBuilderContext

@property (nonatomic) unsigned long long detailLevel;
@property (nonatomic) bool excludePrimaryID;
@property (nonatomic) bool includeVolatileObjects;
@property (nonatomic, copy) NSSet *objectsToExclude;
@property (nonatomic) unsigned long long outputStyle;
@property (nonatomic, copy) NSDictionary *userInfo;

@end
