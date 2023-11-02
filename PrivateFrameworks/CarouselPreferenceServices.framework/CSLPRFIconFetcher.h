
@interface CSLPRFIconFetcher : NSObject {
    UIImage * _genericIcon;
    CSLPRFIconCache * _iconCache;
    NSMutableDictionary * _tasksByBundleID;
}

@property (nonatomic, readonly) UIImage *genericIcon;
@property (nonatomic, readonly) CSLPRFIconCache *iconCache;

- (void).cxx_destruct;
- (void)_completeLoadForBundleID:(id)arg1 image:(id)arg2 error:(id)arg3;
- (void)_insertTask:(id)arg1 forBundleID:(id)arg2;
- (void)_loadIconForBundleIdentifier:(id)arg1;
- (id)genericIcon;
- (bool)hasPendingRequestsForBundleID:(id)arg1;
- (id)iconCache;
- (id)iconFetchTaskForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithIconCache:(id)arg1;

@end
