
@interface ATXNotificationsSuggestionLROutput : NSObject <MLFeatureProvider> {
    NSDictionary * _turnOffProbability;
    long long  _wantTurnOff;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) NSDictionary *turnOffProbability;
@property (nonatomic) long long wantTurnOff;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithWantTurnOff:(long long)arg1 turnOffProbability:(id)arg2;
- (void)setTurnOffProbability:(id)arg1;
- (void)setWantTurnOff:(long long)arg1;
- (id)turnOffProbability;
- (long long)wantTurnOff;

@end
