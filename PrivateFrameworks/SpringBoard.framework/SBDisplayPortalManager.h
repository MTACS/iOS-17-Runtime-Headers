
@interface SBDisplayPortalManager : NSObject {
    NSMapTable * _sourceViewToPortalWindowsMap;
    SBWindowSceneManager * _windowSceneManager;
}

@property (nonatomic, readonly) SBWindowSceneManager *windowSceneManager;

- (void).cxx_destruct;
- (id)_createPortalForSourceView:(id)arg1 sourceWindowScene:(id)arg2 targetWindowScene:(id)arg3 traitsRole:(id)arg4;
- (void)createPortalsForSourceView:(id)arg1 usingTraitsRole:(id)arg2;
- (void)destroyPortalsForSourceView:(id)arg1;
- (id)initWithWindowSceneManager:(id)arg1;
- (id)windowSceneManager;

@end
