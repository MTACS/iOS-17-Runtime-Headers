
@interface CTResumableRoadsideProvider : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _providerId;
    bool  _success;
}

@property (nonatomic, retain) NSNumber *providerId;
@property (nonatomic) bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTResumableRoadsideProvider:(id)arg1;
- (id)providerId;
- (void)setProviderId:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
