
@interface HMFVersion : HMFObject <HMFLocalizable, NSCopying, NSSecureCoding> {
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    unsigned long long  _updateVersion;
}

@property (readonly, copy) NSString *localizedDescription;
@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long updateVersion;
@property (readonly, copy) NSString *versionString;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)initWithVersionString:(id)arg1;
- (bool)isAtLeastVersion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVersion:(id)arg1;
- (bool)isGreaterThanVersion:(id)arg1;
- (id)localizedDescription;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (unsigned long long)updateVersion;
- (id)versionString;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbVersionFromData:(id)arg1;

- (id)hmbData;
- (bool)isGreaterThan:(id)arg1;
- (bool)isGreaterThanOrEqualTo:(id)arg1;
- (bool)isLessThan:(id)arg1;
- (bool)isLessThanOrEqualTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)isGreaterThan:(id)arg1;
- (bool)isGreaterThanOrEqualTo:(id)arg1;
- (bool)isLessThan:(id)arg1;
- (bool)isLessThanOrEqualTo:(id)arg1;
- (id)privateDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (bool)isGreaterThan:(id)arg1;
- (bool)isGreaterThanOrEqualTo:(id)arg1;
- (bool)isLessThan:(id)arg1;
- (bool)isLessThanOrEqualTo:(id)arg1;
- (id)privateDescription;

@end
