
@interface HKFHIRIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _resourceType;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *resourceType;
@property (nonatomic, readonly, copy) NSString *stringValue;

+ (id)FHIRIdentifierWithString:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identifierForContainedResourceWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentResourceIdentifierWithError:(id*)arg1;
- (id)resourceType;
- (id)stringValue;

@end
