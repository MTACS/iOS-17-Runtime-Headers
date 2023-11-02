
@interface CSSiriAcousticFingerprinter : NSObject {
    NSXPCConnection * _asxConnection;
    <CSSiriAcousticFingerprinterDelegate> * _delegate;
    struct OpaqueAudioConverter { } * _fingerprinterConverter;
    double  _interval;
    unsigned long long  _nextFingerprintSampleNumber;
    NSObject<OS_dispatch_queue> * _queue;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _sourceASBD;
    unsigned long long  _totalSampleCount;
}

@property (nonatomic) <CSSiriAcousticFingerprinterDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_configureWithCurrentASBD;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_convertPCMDataForFingerprinting:(id)arg1;
- (bool)_needsConversion;
- (unsigned long long)_samplesPerInterval;
- (id)_service;
- (id)_serviceWithErrorHandler:(id /* block */)arg1;
- (void)appendPCMData:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)flush;
- (id)init;
- (void)reset;
- (void)setASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFingerprintInterval:(double)arg1;

@end
