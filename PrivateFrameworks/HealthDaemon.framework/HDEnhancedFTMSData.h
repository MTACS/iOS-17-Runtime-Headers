
@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering> {
    NSNumber * _averageSpeed;
    NSNumber * _instantaneousSpeed;
}

@property (nonatomic, readonly) NSDate *updateTime;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (id)description;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id*)arg1;

@end
