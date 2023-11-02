
@interface DMFFetchScreenshotRequest : DMFTaskRequest {
    unsigned long long  _maxHeight;
    unsigned long long  _maxWidth;
    NSString * _sessionToken;
    bool  _usesPixels;
}

@property (nonatomic) unsigned long long maxHeight;
@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic, copy) NSString *sessionToken;
@property (nonatomic) bool usesPixels;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxHeight;
- (unsigned long long)maxWidth;
- (id)sessionToken;
- (void)setMaxHeight:(unsigned long long)arg1;
- (void)setMaxWidth:(unsigned long long)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setUsesPixels:(bool)arg1;
- (bool)usesPixels;

@end
