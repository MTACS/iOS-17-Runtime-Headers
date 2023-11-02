
@interface TRIDisenrollRolloutPersistedTask : TRIPBMessage

@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasTriggerEvent;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic) int triggerEvent;

+ (id)descriptor;

@end
