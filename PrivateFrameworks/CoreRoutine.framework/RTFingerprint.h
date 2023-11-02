
@interface RTFingerprint : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _accessPoints;
    NSUUID * _identifier;
    unsigned long long  _settledState;
    NSDate * _start;
}

@property (nonatomic, readonly) NSArray *accessPoints;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long settledState;
@property (nonatomic, readonly) NSDate *start;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessPoints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 accessPoints:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)settledState;
- (id)start;

@end
