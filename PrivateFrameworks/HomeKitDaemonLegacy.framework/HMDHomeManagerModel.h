
@interface HMDHomeManagerModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSDictionary *cloudZoneInformation;
@property (nonatomic, retain) NSString *controllerKeyIdentifier;
@property (nonatomic, retain) NSString *primaryHomeUUID;

+ (id)properties;

@end
