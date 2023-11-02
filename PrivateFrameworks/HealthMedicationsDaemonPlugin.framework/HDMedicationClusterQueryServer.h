
@interface HDMedicationClusterQueryServer : HDQueryServer

+ (Class)queryClass;

- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
