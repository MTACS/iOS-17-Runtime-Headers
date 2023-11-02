
@interface IPInstallableStateSource : NSObject {
    <IPStateAndProgressRegistry> * _associatedRegistry;
    <IPStateObserver> * _observer;
    bool  _resumed;
}

@property (readonly) unsigned long long installableType;
@property (nonatomic) <IPStateObserver> *observer;

- (void).cxx_destruct;
- (id)associatedRegistry;
- (id)collationKey;
- (id)currentProgressForSource:(id)arg1 error:(id*)arg2;
- (id)currentStateWithError:(id*)arg1;
- (void)dealloc;
- (id)initWithRegistry:(id)arg1;
- (unsigned long long)installableType;
- (void)noteInstallStarted;
- (void)notifyOfUpdate:(id)arg1;
- (id)observer;
- (id)progressSourceWithError:(id*)arg1;
- (void)resume;
- (void)setObserver:(id)arg1;

@end
