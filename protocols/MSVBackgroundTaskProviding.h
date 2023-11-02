
@protocol MSVBackgroundTaskProviding

@required

- (unsigned long long)beginTaskWithExpirationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (unsigned long long)beginTaskWithName:(void *)arg1 expirationHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)endTask:(unsigned long long)arg1;

@end
