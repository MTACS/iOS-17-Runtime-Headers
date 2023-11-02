
@interface ACDManagedAuthorization : NSManagedObject

@property (nonatomic, retain) ACDManagedAccountType *accountType;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *grantedPermissions;
@property (nonatomic, retain) id options;

@end
