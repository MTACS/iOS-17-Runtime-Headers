
@protocol PPLocationReadWriteServerProtocol

@required

- (void)clearWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)cloudSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)donateLocations:(void *)arg1 source:(void *)arg2 contextualNamedEntities:(void *)arg3 algorithm:(void *)arg4 cloudSync:(void *)arg5 decayRate:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSArray *, PPSource *, NSSet *, unsigned short, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
