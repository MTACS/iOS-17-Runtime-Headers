
@interface HMDMediaDestinationModel : HMDBackingStoreModelObject <HMFLogging>

@property (retain) NSUUID *audioGroupIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSNumber *supportedOptions;
@property (retain) NSNumber *type;

+ (id)logCategory;
+ (id)properties;

- (id)attributeDescriptions;
- (id)description;
- (id)initWithDestination:(id)arg1 changeType:(unsigned long long)arg2;
- (id)logIdentifier;
- (id)privateDescription;

@end
