
@interface MRCodableGroupSessionParticipant : NSObject <MRGroupSessionParticipant, NSSecureCoding> {
    bool  _connected;
    bool  _host;
    NSString * _identifier;
    MRUserIdentity * _identity;
    bool  _local;
    bool  _pending;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHost, nonatomic) bool host;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) MRUserIdentity *identity;
@property (getter=isLocal, nonatomic) bool local;
@property (getter=isPending, nonatomic) bool pending;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 identity:(id)arg2;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isHost;
- (bool)isLocal;
- (bool)isPending;
- (void)setConnected:(bool)arg1;
- (void)setHost:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLocal:(bool)arg1;
- (void)setPending:(bool)arg1;

@end
