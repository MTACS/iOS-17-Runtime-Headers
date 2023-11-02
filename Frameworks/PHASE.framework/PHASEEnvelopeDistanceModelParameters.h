
@interface PHASEEnvelopeDistanceModelParameters : PHASEDistanceModelParameters {
    PHASEEnvelope * _envelope;
}

@property (nonatomic, readonly) PHASEEnvelope *envelope;

+ (id)new;

- (void).cxx_destruct;
- (id)envelope;
- (id)init;
- (id)initWithEnvelope:(id)arg1;

@end
