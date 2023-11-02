
@interface ARSessionReplayStats : NSObject {
    NSString * _arkitVersion;
    NSString * _deviceModel;
    NSString * _fileName;
    NSString * _osVersion;
    unsigned long long  _recordedSensorTypes;
    int  _recordingFormat;
}

@property (nonatomic, retain) NSString *arkitVersion;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic) unsigned long long recordedSensorTypes;
@property (nonatomic) int recordingFormat;

- (void).cxx_destruct;
- (id)arkitVersion;
- (id)deviceModel;
- (id)fileName;
- (id)osVersion;
- (unsigned long long)recordedSensorTypes;
- (int)recordingFormat;
- (void)setArkitVersion:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setRecordedSensorTypes:(unsigned long long)arg1;
- (void)setRecordingFormat:(int)arg1;

@end
