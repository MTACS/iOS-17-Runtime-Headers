
@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError * _error;
}

- (void).cxx_destruct;
- (void)dematerializeWithObserver:(id)arg1;
- (id)error;
- (unsigned long long)eventType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
