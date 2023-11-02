
@interface DeviceDiscoveryUI._DDAskToAirDropManager : NSObject <NFHardwareEventListener> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isNFCEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isSearching;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _nearbyDeviceCount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sharingName;
    void airDropController;
}

- (void).cxx_destruct;
- (void)didChangeRadioState:(bool)arg1;
- (id)init;

@end
