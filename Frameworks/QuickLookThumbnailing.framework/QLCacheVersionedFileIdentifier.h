
@interface QLCacheVersionedFileIdentifier : NSObject <NSCopying, NSSecureCoding> {
    QLCacheFileIdentifier * _fileIdentifier;
    QLThumbnailVersion * _version;
}

@property (readonly) QLCacheFileIdentifier *fileIdentifier;
@property (readonly) QLThumbnailVersion *version;

+ (bool)supportsSecureCoding;
+ (id)versionedFileIdentifierWithThumbnailRequest:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)version;

@end
