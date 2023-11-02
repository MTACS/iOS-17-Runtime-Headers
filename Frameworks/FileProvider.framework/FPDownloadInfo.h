
@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding> {
    bool  _recursively;
}

@property (nonatomic) bool recursively;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)recursively;
- (void)setRecursively:(bool)arg1;

@end
