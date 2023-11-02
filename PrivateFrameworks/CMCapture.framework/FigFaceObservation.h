
@interface FigFaceObservation : NSObject {
    unsigned long long  _faceID;
    VNFaceObservation * _faceObservation;
    VNTrackObjectRequest * _faceTrackingRequest;
    unsigned long long  _lastUpdatedTime;
}

@property (readonly) unsigned long long faceID;
@property (readonly) VNFaceObservation *faceObservation;
@property (readonly) VNTrackObjectRequest *faceTrackingRequest;
@property unsigned long long lastUpdatedTime;

- (void)dealloc;
- (unsigned long long)faceID;
- (id)faceObservation;
- (id)faceTrackingRequest;
- (id)initWithFaceObservation:(id)arg1 faceID:(unsigned long long)arg2 time:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastUpdatedTime;
- (void)setLastUpdatedTime:(unsigned long long)arg1;

@end
