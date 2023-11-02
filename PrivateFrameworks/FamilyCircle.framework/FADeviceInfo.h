
@interface FADeviceInfo : NSObject <FADeviceInfoProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)unlockedSinceBoot;

@end
