
@interface HMDMediaDestinationControllerModel : HMDBackingStoreModelObject <HMFLogging>

@property (copy) NSArray *availableDestinationModelIdentifierStrings;
@property (retain) NSArray *availableDestinationModelIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSUUID *destinationModelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSNumber *supportedOptions;
@property (retain) NSNumber *type;

+ (id)logCategory;
+ (id)properties;

- (id)attributeDescriptions;
- (id)availableDestinationModelIdentifiers;
- (id)description;
- (id)initWithData:(id)arg1 changeType:(unsigned long long)arg2;
- (id)logIdentifier;
- (id)privateDescription;
- (void)setAvailableDestinationModelIdentifiers:(id)arg1;

@end
