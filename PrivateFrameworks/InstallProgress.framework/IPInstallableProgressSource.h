
@interface IPInstallableProgressSource : NSObject {
    IPInstallableStateSource * _installableStateSource;
    <IPProgressObserver> * _observer;
    bool  _resumed;
}

@property (readonly) IPInstallableStateSource *installableStateSource;
@property <IPProgressObserver> *observer;

- (void).cxx_destruct;
- (id)collationKey;
- (id)currentProgressWithError:(id*)arg1;
- (void)dealloc;
- (id)description;
- (void)finishWithReason:(unsigned long long)arg1;
- (id)initWithStateSource:(id)arg1;
- (id)installableStateSource;
- (void)notifyOfUpdate:(id)arg1;
- (id)observer;
- (void)resume;
- (void)setObserver:(id)arg1;

@end
