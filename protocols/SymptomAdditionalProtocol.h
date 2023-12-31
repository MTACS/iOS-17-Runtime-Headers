
@protocol SymptomAdditionalProtocol <NSObject>

@optional

- (Evaluation *)evaluate:(EventDescription *)arg1 forThreshold:(long long)arg2;
- (bool)noteSymptom:(EventDescription *)arg1;
- (void)reset;

@end
