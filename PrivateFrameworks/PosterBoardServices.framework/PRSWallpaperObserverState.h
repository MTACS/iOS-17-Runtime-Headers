
@interface PRSWallpaperObserverState : NSObject {
    PRSPosterConfiguration * _activeHome;
    PRSPosterConfiguration * _activeLock;
    PRSPosterConfiguration * _selectedHome;
    PRSPosterConfiguration * _selectedLock;
}

@property (nonatomic, readonly) PRSPosterConfiguration *activeHome;
@property (nonatomic, readonly) PRSPosterConfiguration *activeLock;
@property (nonatomic, readonly) PRSPosterConfiguration *selectedHome;
@property (nonatomic, readonly) PRSPosterConfiguration *selectedLock;

- (void).cxx_destruct;
- (id)_initWithSelectedLock:(id)arg1 selectedHome:(id)arg2 activeLock:(id)arg3 activeHome:(id)arg4;
- (id)activeHome;
- (id)activeLock;
- (id)description;
- (id)init;
- (id)selectedHome;
- (id)selectedLock;

@end
