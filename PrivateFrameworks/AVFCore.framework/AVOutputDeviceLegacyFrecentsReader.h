
@interface AVOutputDeviceLegacyFrecentsReader : NSObject <AVOutputDeviceFrecentsReading>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultFrecentsReader;

- (id)deviceIDs;
- (id)frecencyInfoForDeviceWithID:(id)arg1;

@end
