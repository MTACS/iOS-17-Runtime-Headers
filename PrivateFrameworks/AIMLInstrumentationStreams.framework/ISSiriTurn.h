
@interface ISSiriTurn : ISEventGraph

@property (nonatomic, readonly) NSUUID *previousTurnId;
@property (nonatomic, readonly) double timeIntervalSince1970Nonnull;
@property (nonatomic, readonly) NSUUID *turnId;

// Image: /System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams

+ (id)constructWithEventGraph:(id)arg1;

- (id)previousTurnId;
- (double)timeIntervalSince1970Nonnull;
- (id)turnId;

// Image: /System/Library/PrivateFrameworks/FeatureStore.framework/FeatureStore

- (id)dictionaryRepresentation;

@end
