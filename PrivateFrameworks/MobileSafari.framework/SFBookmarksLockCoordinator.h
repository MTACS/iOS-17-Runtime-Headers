
@interface SFBookmarksLockCoordinator : NSObject {
    NSTimer * _bookmarkLockTimer;
    bool  _haveBookmarksLock;
    bool  _needsBookmarksLockOnAppResume;
}

@property (nonatomic, readonly) bool hasBookmarksLock;

+ (id)sharedCoordinator;
+ (void)showLockedDatabaseAlertForAction:(long long)arg1 fromViewController:(id)arg2;

- (void).cxx_destruct;
- (void)_clearBookmarkLockTimer;
- (void)_didBecomeActive;
- (void)_unlockBookmarksNow;
- (void)_willResignActive;
- (void)dealloc;
- (bool)hasBookmarksLock;
- (id)init;
- (bool)lockBookmarks;
- (void)unlockBookmarksIfNeeded;
- (void)unlockBookmarksSoon;

@end
