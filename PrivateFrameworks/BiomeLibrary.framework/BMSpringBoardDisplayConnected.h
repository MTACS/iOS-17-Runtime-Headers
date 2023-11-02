
@interface BMSpringBoardDisplayConnected : BMEventBase <BMStoreData> {
    NSString * _deviceName;
    bool  _hasMirroringMode;
    bool  _hasStarting;
    bool  _mirroringMode;
    NSString * _productName;
    bool  _starting;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic) bool hasMirroringMode;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mirroringMode;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceName;
- (bool)hasMirroringMode;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 deviceName:(id)arg2 uniqueId:(id)arg3 productName:(id)arg4 mirroringMode:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (bool)mirroringMode;
- (id)productName;
- (id)serialize;
- (void)setHasMirroringMode:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
