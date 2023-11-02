
@interface PKFeatureFailure : NSObject <NSSecureCoding> {
    NSNumber * _errorCode;
    unsigned long long  _featureIdentifier;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSString * _serverDescription;
}

@property (nonatomic, readonly, copy) NSNumber *errorCode;
@property (nonatomic, readonly) unsigned long long featureIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSString *serverDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCode;
- (id)errorRepresentation;
- (unsigned long long)featureIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)serverDescription;

@end
