
@interface ASDExternalManifestRequestOptions : ASDRequestOptions {
    NSURL * _manifestURL;
    bool  _shouldHideUserPrompts;
}

@property (nonatomic, readonly) NSURL *manifestURL;
@property (nonatomic) bool shouldHideUserPrompts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)manifestURL;
- (void)setShouldHideUserPrompts:(bool)arg1;
- (bool)shouldHideUserPrompts;

@end
