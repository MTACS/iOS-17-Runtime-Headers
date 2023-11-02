
@interface CHCWorkloop : NSObject

+ (id)serialQueueTargetingSharedWorkloop:(id)arg1;
+ (id)serialQueueTargetingSharedWorkloop:(id)arg1 withQoS:(unsigned int)arg2;
+ (id)sharedDaemonWorkloop;

@end
