
@protocol PADVNFaceprintDetector <PADFrameMonitor>

@required

- (NSArray *)faceprints;
- (void)processFrames:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
