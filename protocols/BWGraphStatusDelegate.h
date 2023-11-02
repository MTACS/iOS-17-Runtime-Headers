
@protocol BWGraphStatusDelegate <NSObject>

@required

- (void)graph:(BWGraph *)arg1 didFinishStartingWithError:(int)arg2;
- (void)graphDidPrepareNodes:(BWGraph *)arg1;

@optional

- (void)graphDidResolveRetainedBufferCounts:(BWGraph *)arg1;

@end
