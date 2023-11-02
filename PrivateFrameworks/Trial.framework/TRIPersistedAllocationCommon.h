
@interface TRIPersistedAllocationCommon : TRIPBMessage

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) TRIPBTimestamp *timestamp;
@property (nonatomic) unsigned int type;

+ (id)descriptor;

@end
