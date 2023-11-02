
@protocol TSWPBookmarkEntry <NSObject>

@required

- (NSString *)displayName;
- (NSString *)key;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (NSURL *)url;

@end
