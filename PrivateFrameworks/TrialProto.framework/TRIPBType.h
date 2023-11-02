
@interface TRIPBType : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *fieldsArray;
@property (nonatomic, readonly) unsigned long long fieldsArray_Count;
@property (nonatomic) bool hasSourceContext;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *oneofsArray;
@property (nonatomic, readonly) unsigned long long oneofsArray_Count;
@property (nonatomic, retain) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (nonatomic, retain) TRIPBSourceContext *sourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
