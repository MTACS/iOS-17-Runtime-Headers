
@interface EventObserver : NSObject {
    NSSet * _bugTypes;
    <OSADiagnosticEventObserver> * _observer;
}

@property (nonatomic, readonly) NSSet *bugTypes;
@property (nonatomic, readonly) <OSADiagnosticEventObserver> *observer;

- (void).cxx_destruct;
- (id)bugTypes;
- (void)deliverEvent:(id)arg1 on:(id)arg2;
- (id)initWithObserver:(id)arg1 bugTypes:(id)arg2;
- (bool)matches:(id)arg1;
- (id)observer;

@end
