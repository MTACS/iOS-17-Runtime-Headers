
@interface MPCPlaybackSharedListeningProperties : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding> {
    ICLiveLink * _liveLink;
    NSString * _sessionIdentifier;
    NSString * _sessionKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICLiveLink *liveLink;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) NSString *sessionKey;
@property (readonly) Class superclass;

+ (id)payloadValueFromJSONValue:(id)arg1;
+ (id)propertiesWithSessionIdentifier:(id)arg1 sessionKey:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)liveLink;
- (id)mpc_jsonValue;
- (id)sessionIdentifier;
- (id)sessionKey;
- (void)setLiveLink:(id)arg1;

@end
