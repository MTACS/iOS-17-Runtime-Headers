
@interface CSStatusBarComponent : CSComponent

@property (nonatomic) long long fakeStatusBar;
@property (nonatomic) NSNumber *fakeStatusBarLevel;

- (long long)fakeStatusBar;
- (id)fakeStatusBar:(long long)arg1;
- (id)fakeStatusBarLevel;
- (id)fakeStatusBarLevel:(id)arg1;
- (id)init;
- (void)setFakeStatusBar:(long long)arg1;
- (void)setFakeStatusBarLevel:(id)arg1;

@end
