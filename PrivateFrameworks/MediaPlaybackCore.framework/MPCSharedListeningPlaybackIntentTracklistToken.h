
@interface MPCSharedListeningPlaybackIntentTracklistToken : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSSecureCoding> {
    ICLiveLinkIdentity * _identity;
    MPCPlaybackSharedListeningProperties * _sharedListeningProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) ICLiveLinkIdentity *identity;
@property (nonatomic, copy) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (readonly) Class superclass;

+ (id)payloadValueFromJSONValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)mpc_jsonValue;
- (void)setIdentity:(id)arg1;
- (void)setSharedListeningProperties:(id)arg1;
- (id)sharedListeningProperties;

@end
