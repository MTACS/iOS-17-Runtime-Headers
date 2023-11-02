
@interface NSISVariableObservation : NSObject {
    double  _lastValue;
    NSISVariableObservation * _nextDirtyObservation;
    NSISVariableObservation * _prevDirtyObservation;
    bool  _valueIsDirtied;
    NSISVariable * _variable;
}

- (void)dealloc;
- (void)emitValueIfNeededWithEngine:(id)arg1;
- (id)initWithVariable:(id)arg1;
- (void)valueWasDirtied;

@end
