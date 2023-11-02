
@protocol XBApplicationSnapshotImageGenerationScheduling <NSObject>

@required

- (void)performImageDataGenerationAsync:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)performImageDataGenerationAsyncAndWait:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)performImageGenerationAsync:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performImageGenerationAsyncAndWait:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
