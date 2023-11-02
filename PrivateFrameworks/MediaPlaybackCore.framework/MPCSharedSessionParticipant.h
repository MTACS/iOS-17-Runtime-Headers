
@interface MPCSharedSessionParticipant : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible> {
    NSString * _expanseIdentifier;
    NSString * _liveLinkIdentifier;
    long long  _liveLinkServiceIdentifier;
    bool  _local;
    NSString * _mediaRemoteGroupSessionIdentifier;
    NSString * _mediaRemoteUserIdentityIdentifier;
    long long  _sessionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)payloadValueFromJSONValue:(id)arg1;

- (void).cxx_destruct;
- (id)mpc_jsonValue;

@end
