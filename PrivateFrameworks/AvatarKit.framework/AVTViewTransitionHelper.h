
@interface AVTViewTransitionHelper : NSObject {
    AVTStickerConfiguration * _stickerConfiguration;
    AVTStickerConfigurationReversionContext * _stickerTransitionReversionContext;
    SCNTechnique * _transitionTechnique;
    AVTView * _view;
}

- (void).cxx_destruct;
- (void)coordinator_performCrossFadeThenAnimateTransitionOutOfStickerConfigurationWithDuration:(double)arg1 avatar:(id)arg2 avatarNode:(id)arg3 oldReversionContext:(id)arg4;
- (void)coordinator_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6;
- (void)coordinator_performCrossFadeTransitionOutOfStickerConfigurationWithDuration:(double)arg1 avatar:(id)arg2 avatarNode:(id)arg3 oldReversionContext:(id)arg4;
- (void)coordinator_performCrossFadeTransitionToStickerConfiguration:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6;
- (id)snapshotViewUsingBackgroundColor;
- (id)transitionTechnique;
- (void)viewBackgroundColor;
- (void)view_performAnimateThenCrossFadeTransitionFromStickerConfiguration:(id)arg1 toStickerConfiguration:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(id /* block */)arg7 simultaneousAnimationsBlock:(id /* block */)arg8;
- (void)view_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg1 fallbackPose:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(id /* block */)arg7 simultaneousAnimationsBlock:(id /* block */)arg8;
- (void)view_performCrossFadeTransitionToStickerConfiguration:(id)arg1 fallbackPose:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(id /* block */)arg7 simultaneousAnimationsBlock:(id /* block */)arg8;

@end
