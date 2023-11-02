
@interface TRIPBApi : TRIPBMessage

@property (nonatomic) bool hasSourceContext;
@property (nonatomic, retain) NSMutableArray *methodsArray;
@property (nonatomic, readonly) unsigned long long methodsArray_Count;
@property (nonatomic, retain) NSMutableArray *mixinsArray;
@property (nonatomic, readonly) unsigned long long mixinsArray_Count;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (nonatomic, retain) TRIPBSourceContext *sourceContext;
@property (nonatomic) int syntax;
@property (nonatomic, copy) NSString *version;

+ (id)descriptor;

@end
