
@interface HMDSiriEndpointSessionStateTLV : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _hubIdentifier;
    HMDSiriEndpointSessionStateTypeWrapper * _sessionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *hubIdentifier;
@property (readonly) NSUUID *hubUUID;
@property (nonatomic, retain) HMDSiriEndpointSessionStateTypeWrapper *sessionState;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)hubIdentifier;
- (id)hubUUID;
- (id)init;
- (id)initWithSessionState:(id)arg1 hubIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (id)sessionState;
- (void)setHubIdentifier:(id)arg1;
- (void)setSessionState:(id)arg1;

@end
