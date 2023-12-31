
@interface CRKFetchChaptersRequest : CATTaskRequest {
    NSString * _identifier;
    NSString * _identifierType;
    NSString * _path;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *identifierType;
@property (nonatomic, copy) NSString *path;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)identifierType;
- (id)initWithCoder:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)path;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifierType:(id)arg1;
- (void)setPath:(id)arg1;

@end
