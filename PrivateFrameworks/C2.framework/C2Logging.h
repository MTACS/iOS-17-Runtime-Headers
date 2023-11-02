
@interface C2Logging : NSObject

+ (void)printToLog:(id)arg1 withDescription:(id)arg2 array:(id)arg3;
+ (void)printToLog:(id)arg1 withDescription:(id)arg2 dictionary:(id)arg3;
+ (void)printToLog:(id)arg1 withDescription:(id)arg2 error:(id)arg3;
+ (void)printToLog:(id)arg1 withDescription:(id)arg2 object:(id)arg3;

@end
