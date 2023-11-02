
@interface ATXBMBookmark : NSObject <NSSecureCoding> {
    <BMBookmark> * _bookmark;
    NSDictionary * _metadata;
    NSURL * _urlPath;
    NSNumber * _versionNumber;
}

@property (nonatomic, retain) <BMBookmark> *bookmark;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, readonly) NSURL *urlPath;
@property (nonatomic, readonly) NSNumber *versionNumber;

+ (id)_dataFromPath:(id)arg1;
+ (bool)_fileExistsAtPath:(id)arg1;
+ (bool)_fileSizeWithinLimitsForPath:(id)arg1 maxFileSize:(unsigned long long)arg2;
+ (id)bookmarkFromData:(id)arg1 bookmarkLocation:(id)arg2 versionNumber:(id)arg3;
+ (id)bookmarkFromURLPath:(id)arg1 maxFileSize:(unsigned long long)arg2 versionNumber:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedClassesForBookmarkSecureCoding;
- (id)bookmark;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLPath:(id)arg1 versionNumber:(id)arg2 bookmark:(id)arg3 metadata:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXBMBookmark:(id)arg1;
- (id)metadata;
- (bool)saveBookmarkWithError:(id*)arg1;
- (id)serializeBookmark:(id*)arg1;
- (void)setBookmark:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)urlPath;
- (id)versionNumber;

@end
