
@interface BMDeviceBatteryTemperature : BMEventBase <BMStoreData> {
    bool  _hasTemperature;
    int  _temperature;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTemperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int temperature;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasTemperature;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTemperature:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasTemperature:(bool)arg1;
- (int)temperature;
- (void)writeTo:(id)arg1;

@end
