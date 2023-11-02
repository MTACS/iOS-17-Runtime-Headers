
@protocol HDMedicationCountObserver

@required

- (void)medicationCountProvider:(id <HDMedicationCountProvider>)arg1 didObserveChangeForProfile:(HDProfile *)arg2 ontologyBackedMedicationCount:(long long)arg3;

@end
