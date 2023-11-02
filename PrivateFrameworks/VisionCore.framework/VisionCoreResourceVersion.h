
@interface VisionCoreResourceVersion : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _major;
    unsigned int  _micro;
    unsigned int  _minor;
}

@property (nonatomic, readonly) unsigned int major;
@property (nonatomic, readonly) unsigned int micro;
@property (nonatomic, readonly) unsigned int minor;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)invalidVersion;
+ (id /* block */)newerFirstComparator;
+ (id /* block */)olderFirstComparator;
+ (bool)supportsSecureCoding;
+ (id)versionForStringRepresentation:(id)arg1;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajor:(unsigned int)arg1;
- (id)initWithMajor:(unsigned int)arg1 minor:(unsigned int)arg2;
- (id)initWithMajor:(unsigned int)arg1 minor:(unsigned int)arg2 micro:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResourceVersion:(id)arg1;
- (bool)isValid;
- (unsigned int)major;
- (unsigned int)micro;
- (unsigned int)minor;
- (id)stringRepresentation;

@end
