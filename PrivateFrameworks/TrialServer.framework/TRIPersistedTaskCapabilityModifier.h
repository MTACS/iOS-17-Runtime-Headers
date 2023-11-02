
@interface TRIPersistedTaskCapabilityModifier : TRIPBMessage

@property (nonatomic) unsigned long long add;
@property (nonatomic) bool hasAdd;
@property (nonatomic) bool hasRemove;
@property (nonatomic) unsigned long long remove;

+ (id)descriptor;

@end
