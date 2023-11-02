
@interface _UIHIDPathSynchronizationFilter : NSObject {
    struct { 
        double minTimeScalingFactor; 
        double maxTimeScalingFactor; 
        double peakThreshold; 
    }  _configuration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentInputPosition;
    double  _currentInputTimestamp;
    double  _initialInputTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPosition;
    NSMutableArray * _inputEvents;
    struct CGPoint { 
        double x; 
        double y; 
    }  _outputPosition;
    double  _outputPositionTimestamp;
    double  _outputPositionTimestampInInputScale;
    long long  _state;
}

- (void).cxx_destruct;

@end
