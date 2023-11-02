
@interface CKMapShareURLsToInstalledBundleIDsOperationInfo : CKOperationInfo <NSCopying, NSSecureCoding> {
    NSArray * _shareURLs;
}

@property (nonatomic, retain) NSArray *shareURLs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareURLs:(id)arg1;
- (id)shareURLs;

@end
