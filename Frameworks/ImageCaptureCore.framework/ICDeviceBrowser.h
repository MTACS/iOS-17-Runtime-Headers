
@interface ICDeviceBrowser : NSObject {
    bool  _browsing;
    <ICDeviceBrowserDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _devicesLock;
    unsigned long long  _internalBrowsedDeviceTypeMask;
    NSMutableArray * _internalDevices;
    bool  _suspended;
}

@property unsigned long long browsedDeviceTypeMask;
@property (getter=isBrowsing) bool browsing;
@property <ICDeviceBrowserDelegate> *delegate;
@property (readonly) NSArray *devices;
@property struct os_unfair_lock_s { unsigned int x1; } devicesLock;
@property unsigned long long internalBrowsedDeviceTypeMask;
@property (retain) NSMutableArray *internalDevices;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void)addDevice:(id)arg1 moreComing:(bool)arg2;
- (unsigned long long)browsedDeviceTypeMask;
- (bool)containsDevice:(id)arg1;
- (id)contentsAuthorizationStatus;
- (id)controlAuthorizationStatus;
- (void)dealloc;
- (id)delegate;
- (id)deviceWithRef:(id)arg1;
- (id)devices;
- (struct os_unfair_lock_s { unsigned int x1; })devicesLock;
- (id)init;
- (unsigned long long)internalBrowsedDeviceTypeMask;
- (id)internalDevices;
- (bool)isBrowsing;
- (bool)isSuspended;
- (id)preferredDevice;
- (void)removeDevice:(id)arg1 moreGoing:(bool)arg2;
- (void)requestContentsAuthorizationWithCompletion:(id /* block */)arg1;
- (void)requestControlAuthorizationWithCompletion:(id /* block */)arg1;
- (void)resetContentsAuthorizationWithCompletion:(id /* block */)arg1;
- (void)resetControlAuthorizationWithCompletion:(id /* block */)arg1;
- (void)setBrowsedDeviceTypeMask:(unsigned long long)arg1;
- (void)setBrowsing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevicesLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setInternalBrowsedDeviceTypeMask:(unsigned long long)arg1;
- (void)setInternalDevices:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)start;
- (void)stop;

@end
