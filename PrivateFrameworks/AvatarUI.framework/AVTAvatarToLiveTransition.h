
@interface AVTAvatarToLiveTransition : AVTTransition {
    <AVTAvatarTransitionModel> * _avatarTransitionModel;
}

@property (nonatomic, readonly) <AVTAvatarTransitionModel> *avatarTransitionModel;

- (void).cxx_destruct;
- (id)avatarTransitionModel;
- (id)initWithModel:(id)arg1 animated:(bool)arg2 setupHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4 logger:(id)arg5;
- (id)model;
- (void)performTransition;

@end
