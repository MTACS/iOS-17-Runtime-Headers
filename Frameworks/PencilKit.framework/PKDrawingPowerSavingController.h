
@interface PKDrawingPowerSavingController : NSObject {
    double  _accumulatedMovement;
    double  _currentMovement;
    bool  _isDrawingWithMarkerOrEraser;
    bool  _isDrawingWithPencil;
    double  _minimumMovementDistanceFinger;
    double  _minimumMovementDistancePencil;
    double  _minimumMovementDistanceTimeout;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _movementDistanceHistoryBuffer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousDrawingLocation;
    double  _previousRenderTimestamp;
    bool  _valid;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
