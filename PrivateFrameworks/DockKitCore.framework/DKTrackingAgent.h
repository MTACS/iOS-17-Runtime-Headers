
@interface DKTrackingAgent : NSObject {
    ObjectTrackingAgent * _agent;
    NSObject<OS_dispatch_semaphore> * _isButtonEnabledSemaphore;
    bool  _isTracking;
    NSObject<OS_dispatch_semaphore> * _isTrackingSemaphore;
    bool  _trackingButtonEnabled;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)docked;
- (id)getSelectedBodyIds;
- (id)getSelectedFaceIds;
- (id)getTrackedObjects;
- (id)init;
- (id)initWithClientApplicationID:(id)arg1;
- (void)processImageWithImage:(id)arg1 faces:(id)arg2;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (void)stop;
- (void)trackWithMetadata:(id)arg1 cameraPortType:(id)arg2 cameraIntrinsics:(id)arg3 referenceDimensions:(struct CGSize { double x1; double x2; })arg4 orientation:(int)arg5 completionHandler:(id /* block */)arg6;
- (void)trackWithMetadata:(id)arg1 image:(id)arg2 cameraPortType:(id)arg3 cameraIntrinsics:(id)arg4 referenceDimensions:(struct CGSize { double x1; double x2; })arg5 orientation:(int)arg6 completionHandler:(id /* block */)arg7;
- (bool)tracking;
- (bool)trackingButtonEnabled;

@end
