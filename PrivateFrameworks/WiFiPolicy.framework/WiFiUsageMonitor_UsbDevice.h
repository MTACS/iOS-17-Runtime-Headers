
@interface WiFiUsageMonitor_UsbDevice : NSObject {
    unsigned long long  _locationID;
    NSString * _name;
    unsigned long long  _vid;
    bool  _vidIsApple;
}

@property (nonatomic) unsigned long long locationID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long vid;
@property (nonatomic) bool vidIsApple;

- (void).cxx_destruct;
- (unsigned long long)controllerID;
- (id)initWithName:(id)arg1 vid:(unsigned long long)arg2 isApple:(bool)arg3 locationID:(unsigned long long)arg4;
- (unsigned long long)locationID;
- (id)name;
- (void)setLocationID:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setVid:(unsigned long long)arg1;
- (void)setVidIsApple:(bool)arg1;
- (unsigned long long)vid;
- (bool)vidIsApple;

@end
