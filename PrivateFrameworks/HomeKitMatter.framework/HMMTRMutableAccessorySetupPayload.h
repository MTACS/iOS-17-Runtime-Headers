
@interface HMMTRMutableAccessorySetupPayload : HMMTRAccessorySetupPayload

@property (nonatomic) bool hasShortDiscriminator;
@property (nonatomic, copy) NSNumber *productID;
@property (nonatomic) bool requiresCustomFlow;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSString *setupPayloadString;
@property (nonatomic, copy) NSNumber *vendorID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
