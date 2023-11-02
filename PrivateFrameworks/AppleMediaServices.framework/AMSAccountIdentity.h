
@interface AMSAccountIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    NSNumber * _dsid;
}

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSNumber *dsid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
