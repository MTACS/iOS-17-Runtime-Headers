
@interface LNConnectionOptions : NSObject <NSCopying> {
    long long  _authenticationPolicy;
    bool  _initiatesAudioSession;
}

@property (nonatomic) long long authenticationPolicy;
@property (nonatomic) bool initiatesAudioSession;

- (long long)authenticationPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)initiatesAudioSession;
- (bool)isEqual:(id)arg1;
- (void)setAuthenticationPolicy:(long long)arg1;
- (void)setInitiatesAudioSession:(bool)arg1;

@end
