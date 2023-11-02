
@interface AFMyriadAdvertisementContextRecord : NSObject {
    unsigned char  _advertisementContextVersion;
    double  _advertisementDispatchTime;
    NSData * _advertisementPayload;
    long long  _advertisementRecordType;
    NSUUID * _deviceID;
    double  _voiceTriggerEndTime;
}

@property (nonatomic, readonly) unsigned char advertisementContextVersion;
@property (nonatomic) double advertisementDispatchTime;
@property (nonatomic, readonly, copy) NSData *advertisementPayload;
@property (nonatomic, readonly) long long advertisementRecordType;
@property (nonatomic, readonly, copy) NSUUID *deviceID;
@property (nonatomic, readonly) double voiceTriggerEndTime;

- (void).cxx_destruct;
- (unsigned long long)_advertismentPayloadSizeForVersion:(unsigned char)arg1;
- (id)_deviceIDFromBytes:(const unsigned char*)arg1;
- (BOOL)_getAdvertismentRecordTypeForVersion:(unsigned char)arg1 data:(id)arg2;
- (id)_getDeviceIdForVersion:(unsigned char)arg1 data:(id)arg2;
- (id)_getMyriadAdvertisementDataForVersion:(unsigned char)arg1 data:(id)arg2;
- (double)_getVoiceTriggerEndTimeForVersion:(unsigned char)arg1 data:(id)arg2;
- (void)_initializeMyriadAdvertisementContextRecordFromData:(id)arg1;
- (unsigned char)advertisementContextVersion;
- (double)advertisementDispatchTime;
- (id)advertisementPayload;
- (long long)advertisementRecordType;
- (bool)compareAdvertisementPayload:(id)arg1;
- (id)description;
- (id)deviceID;
- (id)initWithAdvertisementRecordType:(long long)arg1 voiceTriggerEndTime:(double)arg2 advertisementPayload:(id)arg3 deviceID:(id)arg4;
- (id)initWithMyriadAdvertisementContextRecordData:(id)arg1;
- (bool)isSaneForVoiceTriggerEndTime:(double)arg1 endtimeDistanceThreshold:(double)arg2;
- (id)myriadAdvertisementContextAsData;
- (id)recordForDeviceId:(id)arg1;
- (void)setAdvertisementDispatchTime:(double)arg1;
- (double)voiceTriggerEndTime;

@end
