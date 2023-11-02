
@interface HealthMedicationsExperience.MedicationDose : _TtCs12_SwiftObject <HealthMedicationsExperience.MedicationDetailObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _medication;
    void medicationDetailProvider;
    void medicationDoseType;
}

- (void)medicationDetailDidUpdate:(id)arg1 for:(id)arg2;

@end
