
@interface RoomPlan.RSSessionDelegateWrapper : NSObject <RSCaptureSessionDelegate> {
    void captureSession;
    void initializationState;
}

- (void).cxx_destruct;
- (id)init;
- (void)session:(id)arg1 didFailWithError:(long long)arg2;
- (void)session:(id)arg1 didUpdateAsset:(id)arg2;
- (void)session:(id)arg1 didUpdateFloorPlan:(id)arg2;
- (void)session:(id)arg1 didUpdateMarkerCoaching:(id)arg2;
- (void)session:(id)arg1 didUpdateTextCoaching:(id)arg2;

@end
