
@interface TRIPBMethod : TRIPBMessage

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (nonatomic) bool requestStreaming;
@property (nonatomic, copy) NSString *requestTypeURL;
@property (nonatomic) bool responseStreaming;
@property (nonatomic, copy) NSString *responseTypeURL;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
