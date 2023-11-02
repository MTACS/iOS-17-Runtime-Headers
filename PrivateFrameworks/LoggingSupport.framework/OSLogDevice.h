
@interface OSLogDevice : NSObject {
    long long  _devType;
    void * _mobileDeviceRef;
    SimDevice * _simDev;
    NSString * _uid;
}

@property (nonatomic) long long devType;
@property (nonatomic) void*mobileDeviceRef;
@property (nonatomic, retain) SimDevice *simDev;
@property (nonatomic, retain) NSString *uid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (long long)devType;
- (id)init;
- (id)initWithMobileDevice:(void*)arg1 andUDID:(id)arg2;
- (id)initWithSimualatedDevice:(id)arg1;
- (void*)mobileDeviceRef;
- (void)setDevType:(long long)arg1;
- (void)setMobileDeviceRef:(void*)arg1;
- (void)setSimDev:(id)arg1;
- (void)setUid:(id)arg1;
- (id)simDev;
- (id)uid;

@end
