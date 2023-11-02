
@interface SeymourServices.AccountDeviceObserver : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _fakeSupportedPhoneAvailable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _fakeSupportedWatchAvailable;
    void accountDeviceFetcher;
    void accountFetcher;
    void accountHasSupportedDevice;
    void accountHasSupportedPhone;
    void accountHasSupportedWatch;
    void accountOwnedDevices;
    void eventHub;
    void platform;
}

- (void)deviceListChanged;

@end
