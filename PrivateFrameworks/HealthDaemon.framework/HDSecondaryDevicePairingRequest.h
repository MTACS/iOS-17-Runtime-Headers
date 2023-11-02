
@interface HDSecondaryDevicePairingRequest : NSObject {
    id /* block */  _completion;
    HKSecondaryPairedDeviceConfiguration * _configuration;
    NSString * _guardianAccountIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDTinkerProfile * _profile;
    long long  _stage;
    double  _startTime;
    HKDaemonTransaction * _transaction;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
