
@interface WBSBannerTracker : NSObject {
    NSMutableDictionary * _blockedBanners;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, readonly) long long basis;
@property (nonatomic, readonly) NSString *categoryName;

+ (id)sharedTracker;

- (void).cxx_destruct;
- (id)_filePath;
- (void)_saveOnInteralQueue;
- (long long)basis;
- (void)blockBannerForIdentifier:(id)arg1;
- (id)categoryName;
- (void)clear;
- (id)init;
- (void)isBannerBlockedForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)load;
- (bool)shouldBlockForIdentifier:(id)arg1 withDismissCount:(unsigned long long)arg2;
- (void)unblockBannerForIdentifier:(id)arg1;

@end
