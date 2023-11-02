
@interface FigHumanBodyObservation : NSObject {
    unsigned long long  _humanBodyID;
    VNHumanObservation * _humanObservation;
    VNTrackObjectRequest * _humanTrackingRequest;
    unsigned long long  _lastUpdatedTime;
}

@property (readonly) unsigned long long humanBodyID;
@property (readonly) VNHumanObservation *humanObservation;
@property (readonly) VNTrackObjectRequest *humanTrackingRequest;
@property (readonly) unsigned long long lastUpdatedTime;

- (void)dealloc;
- (unsigned long long)humanBodyID;
- (id)humanObservation;
- (id)humanTrackingRequest;
- (id)initWithHumanObservation:(id)arg1 humanBodyID:(unsigned long long)arg2 time:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastUpdatedTime;

@end
