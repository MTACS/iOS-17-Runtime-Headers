
@protocol VUINowPlayingFeature <NSObject>

@required

- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setAutoRemove:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAutoRemove;
- (unsigned long long)type;
- (id)userInfo;

@end
