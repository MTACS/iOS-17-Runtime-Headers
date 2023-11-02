
@interface AFPairedBluetoothDevicesObserver : NSObject {
    NSArray * _pairedDevices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pairedDevicesLock;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (id)init;
- (id)pairedBluetoothDevices;
- (void)updatePairedDevices:(id)arg1;

@end
