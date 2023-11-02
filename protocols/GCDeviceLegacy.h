
@protocol GCDeviceLegacy <NSObject>

@required

- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (void)addServiceRef:(_GCHIDServiceInfo *)arg1;
- (void)addServiceRefsWithDevice:(id <GCDeviceLegacy>)arg1;
- (bool)areAllHIDDevicesConnected;
- (void)clearServiceRef;
- (bool)hasServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (NSArray *)hidServices;
- (id)initWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (bool)isPublished;
- (NSString *)productCategory;
- (void)removeServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (void)setAllHIDDevicesConnected:(bool)arg1;
- (void)setPublished:(bool)arg1;

@end
