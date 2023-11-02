
@interface WKBokehMotionManager : NSObject {
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _attitude;
    double  _coefficient;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterAW;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterAX;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterAY;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterAZ;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterPitch;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterRoll;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterX;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterY;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterYaw;
    WKBokehInfiniteImpulseResponseFilter * _motionFilterZ;
    CMMotionManager * _motionManager;
    bool  _motionManagerPaused;
    double  _pitch;
    unsigned long long  _referenceFrame;
    double  _roll;
    double  _threshold;
    double  _x;
    double  _y;
    double  _yaw;
    double  _z;
}

- (void).cxx_destruct;
- (id)init;

@end
