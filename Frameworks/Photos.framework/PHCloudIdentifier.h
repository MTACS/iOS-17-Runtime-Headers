
@interface PHCloudIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _fingerPrint;
    NSString * _identifierCode;
    NSString * _localCloudIdentifier;
}

@property (nonatomic, readonly) NSString *fingerPrint;
@property (nonatomic, readonly) NSString *identifierCode;
@property (nonatomic, readonly) NSString *localCloudIdentifier;
@property (nonatomic, readonly) NSString *stringValue;

+ (id)_notFoundIdentifier;
+ (id)notFoundIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerPrint;
- (unsigned long long)hash;
- (id)identifierCode;
- (id)initAsNotFoundIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2 fingerPrint:(id)arg3;
- (id)initWithStringValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localCloudIdentifier;
- (id)stringValue;

@end
