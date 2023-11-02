
@interface CWFUserSettings : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _OSSpecificAttributes;
    long long  _askToJoinMode;
    long long  _autoHotspotMode;
    long long  _compatibilityMode;
    long long  _syncMode;
}

@property (nonatomic, copy) NSDictionary *OSSpecificAttributes;
@property (nonatomic) long long askToJoinMode;
@property (nonatomic) long long autoHotspotMode;
@property (nonatomic) long long compatibilityMode;
@property (nonatomic) long long syncMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)OSSpecificAttributes;
- (long long)askToJoinMode;
- (long long)autoHotspotMode;
- (long long)compatibilityMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUserSettings:(id)arg1;
- (void)setAskToJoinMode:(long long)arg1;
- (void)setAutoHotspotMode:(long long)arg1;
- (void)setCompatibilityMode:(long long)arg1;
- (void)setOSSpecificAttributes:(id)arg1;
- (void)setSyncMode:(long long)arg1;
- (long long)syncMode;

@end
