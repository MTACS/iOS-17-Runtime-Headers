
@interface PRWorkloop : NSObject

+ (id)concurrentQueueTargetingWorkloop:(id)arg1 label:(id)arg2 withQoS:(unsigned int)arg3;
+ (id)serialQueueTargetingSharedWorkloop:(id)arg1;
+ (id)serialQueueTargetingSharedWorkloop:(id)arg1 withQoS:(unsigned int)arg2;
+ (id)serialQueueTargetingWorkloop:(id)arg1 label:(id)arg2 withQoS:(unsigned int)arg3;
+ (id)sharedWorkloop;
+ (id)snapshotWorkloop;

@end
