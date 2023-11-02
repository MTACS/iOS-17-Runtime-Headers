
@protocol GEOTileGroupActivationSessionDelegate <NSObject>

@required

- (void)activationSession:(void *)arg1 didChangeActiveTileGroup:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: GEOTileGroupActivationSession *, GEOActiveTileGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)activationSession:(GEOTileGroupActivationSession *)arg1 didCompleteWithErrors:(NSArray *)arg2;

@end
