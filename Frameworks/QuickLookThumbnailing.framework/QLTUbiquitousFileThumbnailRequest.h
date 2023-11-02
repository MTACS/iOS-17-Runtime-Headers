
@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest {
    FPItem * _item;
}

@property (readonly) QLCacheFileProviderVersionedFileIdentifier *fileIdentifier;
@property (readonly) FPItem *item;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeContentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5;
- (id)item;
- (bool)shouldProvideFoldedGenericIcon;

@end
