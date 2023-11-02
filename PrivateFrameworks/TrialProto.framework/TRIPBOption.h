
@interface TRIPBOption : TRIPBMessage

@property (nonatomic) bool hasValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TRIPBAny *value;

+ (id)descriptor;

@end
