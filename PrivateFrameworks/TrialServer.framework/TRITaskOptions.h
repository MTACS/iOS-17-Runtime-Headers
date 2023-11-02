
@interface TRITaskOptions : TRIPBMessage

@property (nonatomic) bool hasIsManuallyTargeted;
@property (nonatomic) bool isManuallyTargeted;

+ (id)descriptor;

@end
