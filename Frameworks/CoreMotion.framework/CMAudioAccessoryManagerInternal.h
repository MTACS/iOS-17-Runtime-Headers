
@interface CMAudioAccessoryManagerInternal : NSObject {
    bool  fAudioAccessoryAccelerometerAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryAccelerometerDispatcher;
    id /* block */  fAudioAccessoryAccelerometerHandler;
    NSOperationQueue * fAudioAccessoryAccelerometerQueue;
    double  fAudioAccessoryAccelerometerUpdateInterval;
    bool  fAudioAccessoryDeviceMotionAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryDeviceMotionConfigDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryDeviceMotionDispatcher;
    id /* block */  fAudioAccessoryDeviceMotionHandler;
    NSOperationQueue * fAudioAccessoryDeviceMotionQueue;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryDeviceMotionStatusDispatcher;
    id /* block */  fAudioAccessoryDeviceMotionStatusHandler;
    NSOperationQueue * fAudioAccessoryDeviceMotionStatusQueue;
    double  fAudioAccessoryDeviceMotionUpdateInterval;
    bool  fAudioAccessoryGyroAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryGyroDispatcher;
    id /* block */  fAudioAccessoryGyroHandler;
    NSOperationQueue * fAudioAccessoryGyroQueue;
    double  fAudioAccessoryGyroUpdateInterval;
    bool  fAudioAccessoryMagnetometerAvailable;
    struct Dispatcher { int (**x1)(); id x2; } * fAudioAccessoryMagnetometerDispatcher;
    id /* block */  fAudioAccessoryMagnetometerHandler;
    NSOperationQueue * fAudioAccessoryMagnetometerQueue;
    double  fAudioAccessoryMagnetometerUpdateInterval;
    struct CMOQuaternion { 
        float elements[4]; 
    }  fFrameRotation;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
        unsigned long long sensorTime; 
        unsigned short sequenceNumber; 
    }  fLatestAudioAccessoryAccelerometerSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } gyro; 
        unsigned long long sensorTime; 
        unsigned short sequenceNumber; 
        float temperature; 
    }  fLatestAudioAccessoryGyroSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
        unsigned long long sensorTime; 
        unsigned short sequenceNumber; 
        float temperature; 
    }  fLatestAudioAccessoryMagnetometerSample;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fSampleLock;
}

- (id).cxx_construct;
- (id)init;

@end
