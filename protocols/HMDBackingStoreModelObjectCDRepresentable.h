
@protocol HMDBackingStoreModelObjectCDRepresentable <NSObject>

@required

+ (Class)cd_entityClass;

@optional

+ (NSString *)cd_parentReferenceName;

@end
