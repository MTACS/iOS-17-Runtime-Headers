
@interface HMITorsoprint : HMFObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSData * _data;
    bool  _lowQuality;
    bool  _unrecognizable;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly) bool lowQuality;
@property (readonly) bool unrecognizable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 data:(id)arg2;
- (id)initWithUUID:(id)arg1 data:(id)arg2 lowQuality:(bool)arg3 unrecognizable:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)lowQuality;
- (bool)unrecognizable;

@end
