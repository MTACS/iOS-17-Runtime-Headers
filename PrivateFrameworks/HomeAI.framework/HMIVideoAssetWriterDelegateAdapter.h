
@interface HMIVideoAssetWriterDelegateAdapter : HMFObject <HMIVideoAssetWriterDelegate> {
    id /* block */  _assetWriterDidFailWithError;
    id /* block */  _assetWriterDidOutputInitializationSegment;
    id /* block */  _assetWriterDidOutputSeparableSegment;
}

@property (copy) id /* block */ assetWriterDidFailWithError;
@property (copy) id /* block */ assetWriterDidOutputInitializationSegment;
@property (copy) id /* block */ assetWriterDidOutputSeparableSegment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assetWriter:(id)arg1 didFailWithError:(id)arg2;
- (void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2;
- (void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 segmentReport:(id)arg3;
- (id /* block */)assetWriterDidFailWithError;
- (id /* block */)assetWriterDidOutputInitializationSegment;
- (id /* block */)assetWriterDidOutputSeparableSegment;
- (void)setAssetWriterDidFailWithError:(id /* block */)arg1;
- (void)setAssetWriterDidOutputInitializationSegment:(id /* block */)arg1;
- (void)setAssetWriterDidOutputSeparableSegment:(id /* block */)arg1;

@end
