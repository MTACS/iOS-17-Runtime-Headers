
@interface ENAdvertisementMetadata : NSObject {
    unsigned char  _calibrationConfidence;
    BOOL  _txPower;
    long long  _version;
}

@property (nonatomic, readonly) unsigned char calibrationConfidence;
@property (nonatomic, readonly) BOOL txPower;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly, copy) NSString *versionString;

- (unsigned char)attenuationForRSSI:(BOOL)arg1 saturated:(bool)arg2;
- (unsigned char)calibrationConfidence;
- (id)initWithVersion:(long long)arg1 txPower:(BOOL)arg2 calibrationConfidence:(unsigned char)arg3;
- (BOOL)txPower;
- (long long)version;
- (id)versionString;

@end
