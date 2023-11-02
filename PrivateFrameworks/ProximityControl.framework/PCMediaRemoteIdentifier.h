
@interface PCMediaRemoteIdentifier : PCDeviceIdentifier <NSSecureCoding> {
    NSString * _mediaRemoteID;
}

@property (nonatomic, readonly, copy) NSString *mediaRemoteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaRemoteID;

@end
