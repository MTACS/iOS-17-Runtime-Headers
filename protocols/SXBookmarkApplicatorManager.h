
@protocol SXBookmarkApplicatorManager <NSObject>

@required

- (void)registerApplicator:(id <SXBookmarkApplicator>)arg1 bookmarkType:(Class)arg2;

@end
