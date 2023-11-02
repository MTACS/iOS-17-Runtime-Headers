
@interface PKPassCredentialShare : NSObject <NSCopying, NSSecureCoding> {
    NSString * _channelTransportIdentifier;
    NSString * _identifier;
    unsigned long long  _status;
    long long  _targetDevice;
}

@property (nonatomic, retain) NSString *channelTransportIdentifier;
@property (getter=isForWatch, nonatomic, readonly) bool forWatch;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long targetDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelTransportIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForWatch;
- (void)setChannelTransportIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTargetDevice:(long long)arg1;
- (unsigned long long)status;
- (long long)targetDevice;
- (void)updateWithInvitationData:(id)arg1;

@end
