
@interface CRKFetchBooksRequest : CATTaskRequest {
    bool  _includeImages;
}

@property (nonatomic) bool includeImages;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)includeImages;
- (id)initWithCoder:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (void)setIncludeImages:(bool)arg1;

@end
