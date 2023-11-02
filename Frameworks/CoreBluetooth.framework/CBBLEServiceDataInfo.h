
@interface CBBLEServiceDataInfo : NSObject {
    NSData * _serviceData;
    unsigned short  _serviceUUID16;
}

@property (nonatomic, copy) NSData *serviceData;
@property (nonatomic) unsigned short serviceUUID16;

- (void).cxx_destruct;
- (id)serviceData;
- (unsigned short)serviceUUID16;
- (void)setServiceData:(id)arg1;
- (void)setServiceUUID16:(unsigned short)arg1;

@end
