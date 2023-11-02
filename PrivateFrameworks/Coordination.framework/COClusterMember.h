
@interface COClusterMember : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _deviceMetadata;
    unsigned long long  _memberType;
    bool  _stale;
}

@property (nonatomic, readonly, copy) NSDictionary *deviceMetadata;
@property (nonatomic, readonly) unsigned long long memberType;
@property (getter=isStale, nonatomic) bool stale;

+ (id)memberForCurrentDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IDSIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceMetadata;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 deviceMetadata:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMember:(id)arg1;
- (bool)isSameDeviceAsMember:(id)arg1;
- (bool)isStale;
- (unsigned long long)memberType;
- (void)setStale:(bool)arg1;

@end
