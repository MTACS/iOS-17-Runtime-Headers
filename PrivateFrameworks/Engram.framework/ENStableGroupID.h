
@interface ENStableGroupID : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, retain) NSUUID *uuid;

+ (unsigned long long)stableGroupIDLength;
+ (id)stableGroupIDWithCurrentTime;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_mutableDataRepresentation;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)customUUIDCompare:(unsigned char)arg1 u2:(unsigned char)arg2;
- (id)dataRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end