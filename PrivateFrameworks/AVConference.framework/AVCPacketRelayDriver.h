
@interface AVCPacketRelayDriver : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)startMonitoringFileDescriptor:(int)arg1 forConnection:(id)arg2;
- (void)stopMonitoringFileDescriptor:(int)arg1;

@end
