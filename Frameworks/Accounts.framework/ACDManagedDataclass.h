
@interface ACDManagedDataclass : NSManagedObject

@property (nonatomic, retain) NSSet *enabledAccounts;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *provisionedAccounts;
@property (nonatomic, retain) NSSet *supportedTypes;
@property (nonatomic, retain) NSSet *syncableTypes;

@end
