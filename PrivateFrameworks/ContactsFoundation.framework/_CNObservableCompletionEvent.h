
@interface _CNObservableCompletionEvent : CNObservableEvent

- (void)dematerializeWithObserver:(id)arg1;
- (id)error;
- (unsigned long long)eventType;
- (bool)hasValue;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
