
@interface HDMedicationExposableDoseEventEngine : NSObject

+ (id)doseEventsForDateInterval:(id)arg1 medicationIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)writeDoseEvents:(id)arg1 profile:(id)arg2 error:(id*)arg3;

@end
