
@interface SRDaemonNotification : NSObject {
    <SRDaemonNotificationDelegate> * _delegate;
    int  _registrationToken;
    int  _resetDatastoreToken;
    NSString * _sensorIdentifier;
    int  _significantTimeChangeToken;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;

@end
