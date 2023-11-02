
@interface MNStartNavigationReconnectionDetails : NSObject <NSSecureCoding> {
    bool  _isReconnecting;
    NSData * _serverSessionState;
    NSArray * _spokenAnnouncements;
    unsigned long long  _targetLegIndex;
}

@property (nonatomic) bool isReconnecting;
@property (nonatomic, retain) NSData *serverSessionState;
@property (nonatomic, retain) NSArray *spokenAnnouncements;
@property (nonatomic) unsigned long long targetLegIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isReconnecting;
- (id)serverSessionState;
- (void)setIsReconnecting:(bool)arg1;
- (void)setServerSessionState:(id)arg1;
- (void)setSpokenAnnouncements:(id)arg1;
- (void)setTargetLegIndex:(unsigned long long)arg1;
- (id)spokenAnnouncements;
- (unsigned long long)targetLegIndex;

@end
