
@interface CNAvatarImageRenderer : NSObject {
    <CNUILikenessRendering> * _renderer;
    <CNUIPRLikenessResolver> * _resolver;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) <CNUILikenessRendering> *renderer;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *resolver;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)avatarImageForContacts:(id)arg1 scope:(id)arg2;
- (id)avatarImageForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3;
- (id)imageForAvatarAccessoryView:(id)arg1 scope:(id)arg2;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)loadingPlaceholderImageProvider;
- (id)placeholderImageProvider;
- (id)renderAvatarsForContacts:(id)arg1 handler:(id /* block */)arg2;
- (id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(id /* block */)arg3;
- (id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 includePlaceholder:(bool)arg3 imageHandler:(id /* block */)arg4;
- (id)renderAvatarsForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 imageHandler:(id /* block */)arg4;
- (id)renderAvatarsForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 includePlaceholder:(bool)arg4 imageHandler:(id /* block */)arg5;
- (id)renderAvatarsForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 placeholder:(bool)arg4 workScheduler:(id)arg5 imageHandler:(id /* block */)arg6;
- (id)renderMonogramForContact:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderMonogramForString:(id)arg1 handler:(id /* block */)arg2;
- (id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(id /* block */)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 placeholder:(bool)arg4 workScheduler:(id)arg5;
- (id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2;
- (id)renderer;
- (id)resolver;
- (id)runScopeBasedImageObservable:(id /* block */)arg1 scope:(id)arg2 imageHandler:(id /* block */)arg3;
- (id)schedulerProvider;

@end
