
@interface TRIPersistedTreatment : TRIPBMessage

@property (nonatomic) bool hasTreatment;
@property (nonatomic, retain) TRIClientTreatment *treatment;

+ (id)descriptor;

@end
