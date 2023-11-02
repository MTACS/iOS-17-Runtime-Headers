
@interface HMMutableMediaDestination : HMMediaDestination

@property (copy) NSUUID *audioGroupIdentifier;
@property unsigned long long supportedOptions;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
