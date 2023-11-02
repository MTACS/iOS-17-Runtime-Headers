
@interface SearchUISafariObserver : NSObject

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadSearchEngines;

@end