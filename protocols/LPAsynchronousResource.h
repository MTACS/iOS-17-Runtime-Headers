
@protocol LPAsynchronousResource <NSObject>

@required

- (bool)hasPlaceholderValueForAsynchronousLoad;
- (void)loadAsynchronouslyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (bool)needsAsynchronousLoad;

@end
