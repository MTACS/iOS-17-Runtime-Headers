
@interface BWFigCaptureDeviceClient : NSObject {
    NSString * _applicationID;
    bool  _canStealFromClientsWithSamePriority;
    NSString * _clientDescription;
    int  _clientID;
    int  _clientPriority;
    id /* block */  _deviceAvailabilityChangedHandler;
    bool  _deviceSharingWithOtherClientsAllowed;
    int  _pid;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) bool canStealFromClientsWithSamePriority;
@property (nonatomic, readonly) NSString *clientDescription;
@property (nonatomic, readonly) int clientID;
@property (nonatomic, readonly) int clientPriority;
@property (nonatomic, copy) id /* block */ deviceAvailabilityChangedHandler;
@property (nonatomic, readonly) bool deviceSharingWithOtherClientsAllowed;
@property (nonatomic, readonly) int pid;

- (id)applicationID;
- (bool)canShareRegistrationWithClientPID:(int)arg1 deviceAvailabilityChangedHandler:(id /* block */)arg2;
- (bool)canStealFromClientsWithSamePriority;
- (id)clientDescription;
- (int)clientID;
- (int)clientPriority;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id /* block */)deviceAvailabilityChangedHandler;
- (bool)deviceSharingWithOtherClientsAllowed;
- (id)initWithPID:(int)arg1 clientApplicationID:(id)arg2 clientDescription:(id)arg3 clientPriority:(int)arg4 canStealFromClientsWithSamePriority:(bool)arg5 deviceSharingWithOtherClientsAllowed:(bool)arg6 deviceAvailabilityChangedHandler:(id /* block */)arg7;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (void)setDeviceAvailabilityChangedHandler:(id /* block */)arg1;

@end
