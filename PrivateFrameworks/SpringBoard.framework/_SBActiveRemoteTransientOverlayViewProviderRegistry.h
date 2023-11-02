
@interface _SBActiveRemoteTransientOverlayViewProviderRegistry : NSObject {
    NSMapTable * _viewProviderAdapterForSceneIdentifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerViewProvider:(id)arg1;
- (void)unregisterViewProvider:(id)arg1;

@end
