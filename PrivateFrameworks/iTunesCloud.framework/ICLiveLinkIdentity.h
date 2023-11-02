
@interface ICLiveLinkIdentity : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding, _ICMutableLiveLinkIdentityPrivate> {
    NSString * _externalIdentifier;
    NSUUID * _identifier;
    NSURL * _imageURL;
    NSPersonNameComponents * _nameComponents;
    long long  _serverID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) MPCSharedSessionParticipant *msp_mpcParticipant;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic) long long serverID;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)identityWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageURL;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;
- (long long)serverID;
- (void)setExternalIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setServerID:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;
- (id)msp_mpcParticipant;

@end
