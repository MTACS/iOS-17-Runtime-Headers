
@interface QLTFileThumbnailRequest : QLTThumbnailRequest {
    FPSandboxingURLWrapper * _genericSandboxWrapper;
    FPItem * _item;
    FPSandboxingURLWrapper * _quicklookSandboxWrapper;
}

@property (nonatomic, readonly) QLCacheBasicVersionedFileIdentifier *fileIdentifier;
@property (nonatomic, readonly) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (retain) FPItem *item;
@property (nonatomic, readonly) FPSandboxingURLWrapper *quicklookSandboxWrapper;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeContentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)genericSandboxWrapper;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5 error:(id*)arg6;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5 error:(id*)arg6 shouldMakeSandboxWrapper:(bool)arg7;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4;
- (id)item;
- (id)quicklookSandboxWrapper;
- (void)setItem:(id)arg1;
- (bool)shouldProvideFoldedGenericIcon;

@end
