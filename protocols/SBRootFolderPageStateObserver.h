
@protocol SBRootFolderPageStateObserver

@required

- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(bool)arg4;
- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 willBeginTransitionToState:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 willEndTransitionToState:(long long)arg2 successfully:(bool)arg3;

@end
