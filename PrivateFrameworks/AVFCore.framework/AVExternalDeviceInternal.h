
@interface AVExternalDeviceInternal : NSObject {
    NSArray * _HIDs;
    NSData * _MFiCertSerial;
    NSMutableDictionary * _currentViewAreas;
    <AVExternalDeviceDelegate> * _delegate;
    struct OpaqueFigEndpoint { } * _figEndpoint;
    AVDispatchOnce * _makeHIDsOnlyOnce;
    AVDispatchOnce * _makeIconsOnlyOnce;
    NSArray * _oemIcons;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _screenInfo;
    NSObject<OS_dispatch_queue> * _viewAreasQueue;
    AVWeakReference * _weakReference;
}

@end
