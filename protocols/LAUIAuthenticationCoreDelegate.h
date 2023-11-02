
@protocol LAUIAuthenticationCoreDelegate <LAUIAuthenticationDelegate>

@required

- (void)biometryState:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)notification:(long long)arg1 original:(NSNotification *)arg2 mechanism:(unsigned long long)arg3;

@end
