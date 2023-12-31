
@interface SXDeviceCapabilities : NSObject <SXDeviceCapabilities>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCellularTelephonyCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)hasCellularTelephonyCapabilities;

@end
