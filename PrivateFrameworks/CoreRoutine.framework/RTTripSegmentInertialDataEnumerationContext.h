
@interface RTTripSegmentInertialDataEnumerationContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _offset;
    RTTripSegmentInertialDataEnumerationOptions * _options;
}

@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) RTTripSegmentInertialDataEnumerationOptions *options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnumerationOptions:(id)arg1;
- (id)initWithEnumerationOptions:(id)arg1 offset:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContext:(id)arg1;
- (unsigned long long)offset;
- (id)options;

@end
