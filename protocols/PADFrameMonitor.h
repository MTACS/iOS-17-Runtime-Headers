
@protocol PADFrameMonitor <NSObject>

@required

- (void)processFrame:(PADFrame *)arg1;
- (void)waitForCurrentFrameProcessingWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
