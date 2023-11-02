
@protocol SBRootFolderPageStateTransitioning <SBRootFolderPageStateProviding>

@required

- (<SBRootFolderPageTransition> *)beginPageStateTransitionToState:(long long)arg1 reason:(NSString *)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (bool)canTransitionPageStateToState:(long long)arg1;
- (long long)destinationPageState;
- (bool)isTransitioningPageState;
- (void)performPageStateTransitionToState:(void *)arg1 reason:(void *)arg2 animated:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: long long, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
