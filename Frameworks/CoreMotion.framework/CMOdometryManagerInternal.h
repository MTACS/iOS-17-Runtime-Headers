
@interface CMOdometryManagerInternal : NSObject {
    struct InertialOdometryData { 
        double timestampSecs; 
        struct { 
            unsigned long long timestamp; 
            struct { 
                float x; 
                float y; 
                float z; 
            } position; 
            struct { 
                float x; 
                float y; 
                float z; 
            } deltaVelocityCumSum; 
            unsigned long long timestampPositionRollOver; 
            unsigned long long timestampVelocityRollOver; 
            unsigned long long timestampDeltaPositionUnavailable[3]; 
            unsigned long long timestampUninitialized; 
        } state; 
    }  _currentOdometryData;
    bool  _hasFirstSample;
    struct Dispatcher { int (**x1)(); id x2; } * _odometryDispatcher;
    id /* block */  _odometryHandler;
    NSOperationQueue * _odometryQueue;
    double  _odometryUpdateInterval;
    struct InertialOdometryData { 
        double timestampSecs; 
        struct { 
            unsigned long long timestamp; 
            struct { 
                float x; 
                float y; 
                float z; 
            } position; 
            struct { 
                float x; 
                float y; 
                float z; 
            } deltaVelocityCumSum; 
            unsigned long long timestampPositionRollOver; 
            unsigned long long timestampVelocityRollOver; 
            unsigned long long timestampDeltaPositionUnavailable[3]; 
            unsigned long long timestampUninitialized; 
        } state; 
    }  _previousOdometryData;
}

- (id)init;

@end
