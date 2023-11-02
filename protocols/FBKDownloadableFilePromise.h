
@protocol FBKDownloadableFilePromise

@required

- (NSString *)UUID;
- (bool)canDownload;
- (NSDate *)createdAt;
- (unsigned long long)downloadState;
- (NSString *)localizedDownloadErrorString;

@end
