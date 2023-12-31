
@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>

@property (nonatomic, readonly, copy) NSArray *allFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short elapsedTime;
@property (nonatomic, readonly) bool elapsedTimeIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *updateTime;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2;
+ (unsigned char)flagFieldLength;
+ (id)uuid;

- (id)allFields;
- (unsigned short)elapsedTime;
- (bool)elapsedTimeIsSet;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id*)arg1;

@end
