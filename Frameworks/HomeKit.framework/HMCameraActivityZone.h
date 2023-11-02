
@interface HMCameraActivityZone : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _points;
}

@property (readonly, copy) NSArray *points;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoints:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)points;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)createHMIActivityZoneWithIsInclusion:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)createHMIActivityZoneWithIsInclusion:(bool)arg1;

@end
