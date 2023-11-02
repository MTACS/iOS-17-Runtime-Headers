
@interface TRIPBValue : TRIPBMessage

@property (nonatomic) bool boolValue;
@property (nonatomic, readonly) int kindOneOfCase;
@property (nonatomic, retain) TRIPBListValue *listValue;
@property (nonatomic) int nullValue;
@property (nonatomic) double numberValue;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, retain) TRIPBStruct *structValue;

+ (id)descriptor;

@end
