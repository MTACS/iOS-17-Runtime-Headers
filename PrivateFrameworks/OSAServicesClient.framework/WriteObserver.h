
@interface WriteObserver : NSObject {
    NSSet * _bugTypes;
    <OSADiagnosticWriteObserver> * _observer;
}

@property (nonatomic, readonly) NSSet *bugTypes;
@property (nonatomic, readonly) <OSADiagnosticWriteObserver> *observer;

- (void).cxx_destruct;
- (id)bugTypes;
- (void)deliverDidWrite:(id)arg1 on:(id)arg2;
- (void)deliverWillWrite:(id)arg1 on:(id)arg2;
- (id)initWithObserver:(id)arg1 bugTypes:(id)arg2;
- (bool)matches:(id)arg1;
- (id)observer;

@end
