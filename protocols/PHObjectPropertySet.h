
@protocol PHObjectPropertySet <NSObject>

@required

+ (NSString *)entityName;
+ (bool)isToMany;
+ (NSString *)keyPathFromPrimaryObject;
+ (NSString *)keyPathToPrimaryObject;
+ (NSArray *)propertiesToFetch;

@optional

+ (NSArray *)additionalPropertiesToFetchOnPrimaryObject;
+ (bool)createsPropertySetObjectWithCustomImplementation;
+ (bool)inverseIsToMany;
+ (NSArray *)propertiesToSortBy;

@end
