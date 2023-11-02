
@interface MedicalIDChangeObserver : NSObject {
    <MedicalIDChangeObserverDelegate> * _delegate;
    int  _medicalIDChangedToken;
}

@property (nonatomic) <MedicalIDChangeObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startObservingChanges;

@end
