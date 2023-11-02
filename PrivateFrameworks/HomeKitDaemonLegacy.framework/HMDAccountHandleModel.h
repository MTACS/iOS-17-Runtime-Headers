
@interface HMDAccountHandleModel : HMDBackingStoreModelObject

@property (nonatomic, retain) IDSURI *idsURI;
@property (nonatomic, retain) NSNumber *local;

+ (id)properties;
+ (id)schemaHashRoot;

@end
