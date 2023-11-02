
@interface BLSBacklightChangeSourceEventSuppressionMetadata : BLSBacklightChangeSourceEventMetadata {
    unsigned long long  _reason;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) unsigned long long type;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reason;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost

- (id)initWithSuppressionEvent:(id)arg1;

@end
