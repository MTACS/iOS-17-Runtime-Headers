
@protocol BPSCorrelateProducer <NSObject>

@required

- (long long)receiveInput:(id)arg1 source:(long long)arg2;
- (BPSPartialCompletion *)receiveNewValue:(id)arg1 source:(long long)arg2;

@end
