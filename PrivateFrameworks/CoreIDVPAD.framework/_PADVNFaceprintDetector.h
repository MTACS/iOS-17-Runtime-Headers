
@interface _PADVNFaceprintDetector : PADVNSerialRequestsScheduler <PADVNFaceprintDetector> {
    id /* block */  _completion;
    NSMutableArray * _faceprints;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _setSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *faceprints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)analyzeObservationComposite:(id)arg1;
- (void)analyzeObservationCompositeSet:(id)arg1;
- (id)faceprints;
- (void)handleObservationCompositeError:(id)arg1;
- (id)init;
- (void)invalidate;
- (unsigned long long)observationCompositeSetSize;
- (void)processFrames:(id)arg1 completion:(id /* block */)arg2;
- (id)requestsForFrame:(id)arg1 handler:(id /* block */)arg2;
- (void)setFaceprints:(id)arg1;

@end
