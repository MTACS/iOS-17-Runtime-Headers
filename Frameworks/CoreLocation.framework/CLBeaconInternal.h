
@interface CLBeaconInternal : NSObject {
    double  accuracy;
    NSNumber * major;
    NSNumber * minor;
    long long  proximity;
    NSUUID * proximityUUID;
    long long  rssi;
    double  timestamp;
}

@end
