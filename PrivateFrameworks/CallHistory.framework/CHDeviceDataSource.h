
@interface CHDeviceDataSource : NSObject <CHDeviceDataSource>

@property (getter=isBootLockEnabled, nonatomic, readonly) bool bootLockEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isBootLockEnabled;

@end
