
@interface TRIAnyPersistedTask : TRIPBMessage

@property (nonatomic) bool hasSerialized;
@property (nonatomic) bool hasType;
@property (nonatomic, copy) NSData *serialized;
@property (nonatomic) int type;

+ (id)descriptor;

@end
