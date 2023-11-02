
@interface HMFaceprint : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSData * _data;
    NSUUID * _faceCropUUID;
    NSUUID * _modelUUID;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSUUID *faceCropUUID;
@property (readonly, copy) NSUUID *modelUUID;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceCropUUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 data:(id)arg2 modelUUID:(id)arg3 faceCropUUID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)modelUUID;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)createHMIFaceprint;
- (id)initWithHMIFaceprint:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)createHMIFaceprint;
- (id)initWithHMIFaceprint:(id)arg1;

@end
