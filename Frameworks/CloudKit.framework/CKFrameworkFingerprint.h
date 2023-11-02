
@interface CKFrameworkFingerprint : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _cpuSubtype;
    NSNumber * _cpuType;
    NSUUID * _uuid;
    NSNumber * _version;
}

@property (nonatomic, copy) NSNumber *cpuSubtype;
@property (nonatomic, copy) NSNumber *cpuType;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, copy) NSNumber *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cpuSubtype;
- (id)cpuType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLikelyEqual:(id)arg1;
- (void)setCpuSubtype:(id)arg1;
- (void)setCpuType:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)uuid;
- (id)version;

@end
