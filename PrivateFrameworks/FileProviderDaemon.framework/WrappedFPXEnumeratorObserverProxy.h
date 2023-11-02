
@interface WrappedFPXEnumeratorObserverProxy : NSObject <FPXEnumeratorObserver> {
    <FPXEnumeratorObserver> * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (id)initWithTarget:(id)arg1;

@end
