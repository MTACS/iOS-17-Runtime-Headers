
@interface IMBalloonBrowserPlugin : IMBalloonPlugin

- (id)initWithIdentifier:(id)arg1 browserDisplayName:(id)arg2 browserImageName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 browserDisplayName:(id)arg2 browserImageName:(id)arg3 browserClass:(Class)arg4 presentationContext:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 browserDisplayName:(id)arg2 browserImagePath:(id)arg3;
- (bool)isBetaPlugin;
- (id)version;

@end
