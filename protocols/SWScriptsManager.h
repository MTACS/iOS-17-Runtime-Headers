
@protocol SWScriptsManager <NSObject>

@required

- (void)addScript:(id <SWScript>)arg1;
- (void)executeScript:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <SWScript> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeAllScripts;
- (void)removeScript:(id <SWScript>)arg1;

@end
