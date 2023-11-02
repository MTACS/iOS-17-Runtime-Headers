
@interface DACChangeMarker : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _uuid;
    long long  _version;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) long long version;

+ (id)missingMarker;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToChangeMarker:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)uuid;
- (long long)version;

@end
