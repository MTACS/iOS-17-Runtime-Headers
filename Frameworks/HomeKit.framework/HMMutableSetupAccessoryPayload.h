
@interface HMMutableSetupAccessoryPayload : HMSetupAccessoryPayload

@property (nonatomic, copy) NSNumber *categoryNumber;
@property (nonatomic, retain) HMCHIPAccessorySetupPayload *chipAccessorySetupPayload;
@property (getter=isPaired, nonatomic) bool paired;
@property (nonatomic, copy) NSString *productNumber;
@property (nonatomic, copy) NSString *setupID;
@property (nonatomic, copy) NSURL *setupPayloadURL;
@property (nonatomic) bool supportsBTLE;
@property (nonatomic) bool supportsIP;
@property (nonatomic) bool supportsWAC;
@property (nonatomic, copy) NSNumber *threadIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
