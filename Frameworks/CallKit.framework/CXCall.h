
@interface CXCall : NSObject <CXCopying, NSSecureCoding> {
    NSUUID * _UUID;
    bool  _endpointOnCurrentDevice;
    bool  _hasConnected;
    bool  _hasEnded;
    bool  _hostedOnCurrentDevice;
    bool  _onHold;
    bool  _outgoing;
    NSString * _providerIdentifier;
    bool  _screening;
    bool  _video;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEndpointOnCurrentDevice, nonatomic) bool endpointOnCurrentDevice;
@property (nonatomic) bool hasConnected;
@property (nonatomic) bool hasEnded;
@property (readonly) unsigned long long hash;
@property (getter=isHostedOnCurrentDevice, nonatomic) bool hostedOnCurrentDevice;
@property (getter=isOnHold, nonatomic) bool onHold;
@property (getter=isOutgoing, nonatomic) bool outgoing;
@property (nonatomic, retain) NSString *providerIdentifier;
@property (getter=isScreening, nonatomic) bool screening;
@property (readonly) Class superclass;
@property (getter=isVideo, nonatomic) bool video;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConnected;
- (bool)hasEnded;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEndpointOnCurrentDevice;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCall:(id)arg1;
- (bool)isHostedOnCurrentDevice;
- (bool)isOnHold;
- (bool)isOutgoing;
- (bool)isScreening;
- (bool)isVideo;
- (id)providerIdentifier;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHostedOnCurrentDevice:(bool)arg1;
- (void)setOnHold:(bool)arg1;
- (void)setOutgoing:(bool)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setScreening:(bool)arg1;
- (void)setVideo:(bool)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
