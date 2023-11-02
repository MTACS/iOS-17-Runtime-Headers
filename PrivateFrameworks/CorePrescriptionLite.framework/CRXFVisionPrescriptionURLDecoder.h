
@interface CRXFVisionPrescriptionURLDecoder : NSObject {
    HKQuantityRange * _axisRange;
    HKQuantityRange * _cylinderRange;
    NSString * _deviceModel;
    NSObject<OS_os_log> * _log;
    HKQuantityRange * _sphereRange;
}

- (void).cxx_destruct;
- (unsigned short)computeCRC16ForString:(id)arg1;
- (unsigned short)computeURLChecksum:(id)arg1;
- (id)initWithDeviceModel:(id)arg1;
- (id)prescriptionFromURL:(id)arg1 withDescription:(id)arg2;

@end
