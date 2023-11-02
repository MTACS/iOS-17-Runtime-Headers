
@protocol PFFairPlayInvalidationManaging

@required

- (void)invalidateFairPlayKeyFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)markKeyForInvalidationAt:(NSURL *)arg1 shouldRemove:(bool)arg2;
- (void)removalAllFairPlayKeysWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSError *)removeKeyFor:(PFFairPlayAsset *)arg1;

@end
