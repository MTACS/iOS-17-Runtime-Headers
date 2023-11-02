
@protocol AAViewingSessionManagerType

@required

- (void)endActiveViewingSession;
- (void)endViewingSessionForContentIdentifier:(NSString *)arg1;
- (void)removeObject:(id)arg1 forContentIdentifier:(NSString *)arg2;
- (AAViewingSession *)viewingSessionForContentIdentifier:(void *)arg1 object:(void *)arg2 onEnd:(void *)arg3; // needs 3 arg types, found 8: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AAViewingSession *, void*

@end
