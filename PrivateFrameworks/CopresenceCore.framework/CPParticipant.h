
@interface CPParticipant : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _accountIdentifier;
    bool  _audioEnabled;
    long long  _audioToken;
    NSDictionary * _avcStreams;
    unsigned char  _localStatus;
    unsigned long long  _participantIdentifier;
    bool  _screenEnabled;
    long long  _screenToken;
    unsigned long long  _spatialAudioSourceIdentifier;
    long long  _streamToken;
    NSDictionary * _userContext;
    bool  _videoEnabled;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic, readonly) long long audioToken;
@property (nonatomic, readonly, copy) NSDictionary *avcStreams;
@property (nonatomic, readonly) unsigned char localStatus;
@property (nonatomic, readonly) unsigned long long participantID;
@property (setter=_setParticipantIdentifier:, nonatomic) unsigned long long participantIdentifier;
@property (getter=isScreenEnabled, nonatomic) bool screenEnabled;
@property (nonatomic) long long screenToken;
@property (nonatomic, readonly) unsigned long long spatialAudioSourceID;
@property (setter=_setSpatialAudioSourceIdentifier:, nonatomic) unsigned long long spatialAudioSourceIdentifier;
@property (nonatomic) long long streamToken;
@property (nonatomic, copy) NSDictionary *userContext;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (bool)_isLocal;
- (bool)_isNearby;
- (bool)_isSpectator;
- (id)_localStatusDescription;
- (void)_setAVCStreams:(id)arg1;
- (void)_setAudioToken:(long long)arg1;
- (void)_setLocalStatus:(unsigned char)arg1;
- (void)_setParticipantID:(long long)arg1;
- (void)_setParticipantIdentifier:(unsigned long long)arg1;
- (void)_setSpatialAudioSourceId:(unsigned long long)arg1;
- (void)_setSpatialAudioSourceIdentifier:(unsigned long long)arg1;
- (id)accountIdentifier;
- (long long)audioToken;
- (id)avcStreams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 accountIdentifier:(id)arg2;
- (bool)isAudioEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToParticipant:(id)arg1;
- (bool)isScreenEnabled;
- (bool)isVideoEnabled;
- (unsigned char)localStatus;
- (unsigned long long)participantID;
- (unsigned long long)participantIdentifier;
- (long long)screenToken;
- (void)setAudioEnabled:(bool)arg1;
- (void)setScreenEnabled:(bool)arg1;
- (void)setScreenToken:(long long)arg1;
- (void)setStreamToken:(long long)arg1;
- (void)setUserContext:(id)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (unsigned long long)spatialAudioSourceID;
- (unsigned long long)spatialAudioSourceIdentifier;
- (long long)streamToken;
- (id)userContext;

@end
