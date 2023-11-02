
@interface TRIPBEnum : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *enumvalueArray;
@property (nonatomic, readonly) unsigned long long enumvalueArray_Count;
@property (nonatomic) bool hasSourceContext;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (nonatomic, retain) TRIPBSourceContext *sourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
