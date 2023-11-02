
@interface CRKFetchScreenshotRequest : CATTaskRequest {
    unsigned long long  _maxHeight;
    unsigned long long  _maxWidth;
}

@property (nonatomic) unsigned long long maxHeight;
@property (nonatomic) unsigned long long maxWidth;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxHeight;
- (unsigned long long)maxWidth;
- (void)setMaxHeight:(unsigned long long)arg1;
- (void)setMaxWidth:(unsigned long long)arg1;

@end
