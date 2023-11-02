
@protocol AAURLSessionTaskProtocol <NSCopying, NSObject>

@required

- (void)cancel;
- (void)resume;
- (void)suspend;

@end
