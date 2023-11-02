
@interface CRXFCalibrationData : NSObject {
    NSData * _accPayload;
    NSDictionary * _accPayloadsBySerial;
    NSString * _leftCalibrationData;
    NSString * _rightCalibrationData;
}

@property (nonatomic, readonly) NSData *accPayload;
@property (nonatomic, readonly) NSDictionary *accPayloadsBySerial;
@property (nonatomic, readonly) NSString *leftCalibrationData;
@property (nonatomic, readonly) NSString *rightCalibrationData;

- (void).cxx_destruct;
- (id)accPayload;
- (id)accPayloadsBySerial;
- (id)initWithACCPayload:(id)arg1 leftCalibrationData:(id)arg2 rightCalibrationData:(id)arg3 accPayloadsBySerial:(id)arg4;
- (id)leftCalibrationData;
- (id)rightCalibrationData;

@end
