
@interface HealthExperience.MedicalIDCache : NSObject <MedicalIDChangeObserverDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _medicalIDDataResult;
    void medicalIDChangeObserver;
    void medicalIDFetchOperation;
    void medicalIDFetchQueue;
    void medicalIDStore;
}

- (void).cxx_destruct;
- (id)init;
- (void)medicalIDDidChange;

@end
