
@protocol TSFollowingEventTracker

@required

- (void)followingBrowserDidCompleteWith:(long long)arg1;
- (void)followingBrowserDidTapOnItemWithTag:(id <FCTagProviding>)arg1 selected:(bool)arg2 sceneType:(long long)arg3;

@end
