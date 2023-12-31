
@interface VSDeveloperIdentityProvider : NSManagedObject

@property (nonatomic, copy) NSArray *authenticationSchemes;
@property (nonatomic, copy) NSString *authenticationURL;
@property (nonatomic, copy) NSString *certificateURL;
@property (nonatomic, copy) NSString *nameForSorting;
@property (nonatomic, copy) NSString *providerID;
@property (nonatomic, copy) NSString *uniqueID;

@end
