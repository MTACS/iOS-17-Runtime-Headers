
@interface _CNObservableResultEvent : CNObservableEvent {
    id  _result;
}

- (void).cxx_destruct;
- (void)dematerializeWithObserver:(id)arg1;
- (id)description;
- (id)error;
- (unsigned long long)eventType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithResult:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
