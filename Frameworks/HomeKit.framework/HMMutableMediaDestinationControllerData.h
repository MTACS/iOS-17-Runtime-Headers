
@interface HMMutableMediaDestinationControllerData : HMMediaDestinationControllerData

@property (copy) NSArray *availableDestinationIdentifiers;
@property (copy) NSUUID *destinationIdentifier;
@property unsigned long long supportedOptions;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
