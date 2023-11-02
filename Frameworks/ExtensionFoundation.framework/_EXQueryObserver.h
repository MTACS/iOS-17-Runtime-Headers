
@interface _EXQueryObserver : _EXQueryController <_EXQueryControllerDelegate> {
    <_EXQueryObserverDelegate> * _internalDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *extensions;
@property (readonly) unsigned long long hash;
@property <_EXQueryObserverDelegate> *internalDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensions;
- (id)initWithQueries:(id)arg1 delegate:(id)arg2;
- (id)internalDelegate;
- (void)queryControllerDidUpdate:(id)arg1 difference:(id)arg2;
- (void)setInternalDelegate:(id)arg1;

@end
