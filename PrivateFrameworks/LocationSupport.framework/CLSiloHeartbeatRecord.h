
@interface CLSiloHeartbeatRecord : NSObject {
    int  _ackCount;
    int  _residentCount;
    CLSilo * _silo;
    Class  _svcClass;
    NSString * _svcName;
    int  _synCount;
}

@property (nonatomic, readonly) int ackCount;
@property (nonatomic) int residentCount;
@property (nonatomic, readonly) CLSilo *silo;
@property (nonatomic, readonly) Class svcClass;
@property (readonly) NSString *svcName;
@property (nonatomic, readonly) int synCount;

- (void).cxx_destruct;
- (void)ack;
- (int)ackCount;
- (id)initTrackingServiceClass:(Class)arg1 name:(id)arg2;
- (int)residentCount;
- (void)setResidentCount:(int)arg1;
- (id)silo;
- (Class)svcClass;
- (id)svcName;
- (void)syn;
- (int)synCount;

@end
