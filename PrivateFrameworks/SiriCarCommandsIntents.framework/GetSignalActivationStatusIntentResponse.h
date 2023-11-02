
@interface GetSignalActivationStatusIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic, retain) NSNumber *carSignal;
@property (nonatomic) long long code;
@property (nonatomic, retain) NSNumber *signalActivated;

- (long long)code;
- (id)init;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCode:(long long)arg1;

@end
