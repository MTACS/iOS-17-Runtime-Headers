
@interface AVTAvatarCellToStaticTransition : AVTTransition {
    <AVTAvatarTransitionModel> * _avatarTransitionModel;
}

@property (nonatomic, readonly) <AVTAvatarTransitionModel> *avatarTransitionModel;

- (void).cxx_destruct;
- (id)avatarTransitionModel;
- (id)initWithModel:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3 logger:(id)arg4;
- (id)model;
- (void)performTransition;

@end
