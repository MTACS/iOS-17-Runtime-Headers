
@interface HMDDeviceNotificationHandlerDefaultDataSource : NSObject <HMDDeviceNotificationHandlerDataSource> {
    HMDHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)home;
- (id)initWithHome:(id)arg1;
- (void)setHome:(id)arg1;
- (id)timerWithType:(unsigned char)arg1;

@end
