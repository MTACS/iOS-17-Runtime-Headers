
@interface SBDaemonHandler : NSObject

+ (bool)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3;
+ (void)initialize;
+ (void)noteDaemonCanceled:(id)arg1;
+ (void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2;
+ (id)stateDescription;

@end
