
@interface WPDAdvertisingData : NSObject {
    long long  _advertRate;
    bool  _assertPower;
    bool  _enableEPAForAdvertisement;
    NSMutableData * _internalData;
    bool  _isRanging;
    NSMutableSet * _types;
}

@property long long advertRate;
@property bool assertPower;
@property (getter=getData, readonly) NSData *data;
@property bool enableEPAForAdvertisement;
@property (retain) NSMutableData *internalData;
@property bool isRanging;
@property (retain) NSMutableSet *types;

- (void).cxx_destruct;
- (void)addAdvertisingRequest:(id)arg1;
- (long long)advertRate;
- (bool)assertPower;
- (id)description;
- (bool)enableEPAForAdvertisement;
- (id)getData;
- (id)init;
- (id)internalData;
- (bool)isEnableEPAForAdvertisement;
- (bool)isEqualToData:(id)arg1;
- (bool)isRanging;
- (bool)isValidWithAdditionalRequest:(id)arg1;
- (void)setAdvertRate:(long long)arg1;
- (void)setAssertPower:(bool)arg1;
- (void)setEnableEPAForAdvertisement:(bool)arg1;
- (void)setInternalData:(id)arg1;
- (void)setIsRanging:(bool)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
