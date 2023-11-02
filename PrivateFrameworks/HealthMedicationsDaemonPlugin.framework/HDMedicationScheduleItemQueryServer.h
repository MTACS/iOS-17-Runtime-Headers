
@interface HDMedicationScheduleItemQueryServer : HDQueryServer {
    HKMedicationScheduleItemQueryConfiguration * _configuration;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
