
@protocol _NSFileBackedFuture

@required

- (NSUUID *)UUID;
- (unsigned long long)fileSize;
- (NSURL *)fileURL;

@end
