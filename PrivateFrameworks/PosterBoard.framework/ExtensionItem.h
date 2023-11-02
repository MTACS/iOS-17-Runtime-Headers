
@interface ExtensionItem : NSObject {
    long long  _activationStyle;
    _EXExtensionIdentity * _extension;
    PRSPosterPath<BSInvalidatable> * _tmpPoster;
    PRSceneViewController * _viewController;
}

+ (id)itemWithExtension:(id)arg1 activationStyle:(long long)arg2;

- (void).cxx_destruct;
- (id)activate;
- (void)deactivate;
- (void)dealloc;
- (unsigned long long)hash;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)wasEverActivated;

@end
