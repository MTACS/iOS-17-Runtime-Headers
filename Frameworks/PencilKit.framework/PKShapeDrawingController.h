
@interface PKShapeDrawingController : NSObject {
    struct { 
        union { 
            struct CGPoint { 
                double x; 
                double y; 
            } point; 
            struct CGPoint { 
                double x; 
                double y; 
            } location; 
        } ; 
        double force; 
        double azimuth; 
        double altitude; 
        double velocity; 
        double directionAngle; 
        double zPosition; 
        double timestamp; 
        bool predicted; 
        long long estimationUpdateIndex; 
        double length; 
        bool hasEstimatedAltitudeAndAzimuth; 
    }  _averageInputPoint;
    bool  _closedShapeDetected;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentStrokeBounds;
    struct vector<ClipperLib::IntPoint, std::allocator<ClipperLib::IntPoint>> { 
        struct IntPoint {} *__begin_; 
        struct IntPoint {} *__end_; 
        struct __compressed_pair<ClipperLib::IntPoint *, std::allocator<ClipperLib::IntPoint>> { 
            struct IntPoint {} *__value_; 
        } __end_cap_; 
    }  _currentStrokePoints;
    <PKShapeDrawingControllerDelegate> * _delegate;
    PKShape * _detectedShape;
    double  _latestAddedPointTime;
    double  _maximumRecognitionDelay;
    double  _minimumRecognitionDelay;
    unsigned long long  _numInputPoints;
    bool  _shapeRecognitionOn;
    CHRecognizer * _shapeRecognizer;
    bool  _shouldDetect;
    bool  _smartFillEnabled;
    NSUUID * _smartFillGroupID;
    PKStrokeRenderMask * _smartFillRenderMask;
    bool  _stopGestureDetected;
    double  _strokeDuration;
    double  _strokeStartTime;
    struct vector<TimestampedPoint, std::allocator<TimestampedPoint>> { 
        struct TimestampedPoint {} *__begin_; 
        struct TimestampedPoint {} *__end_; 
        struct __compressed_pair<TimestampedPoint *, std::allocator<TimestampedPoint>> { 
            struct TimestampedPoint {} *__value_; 
        } __end_cap_; 
    }  _timestampedPoints;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
