
@interface STUserID : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _dsid;
}

@property (readonly, copy) NSNumber *dsid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUserID:(id)arg1;

@end
