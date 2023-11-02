
@interface BMDeviceBluetoothUseCase : BMEventBase <BMStoreData> {
    bool  _hasStarting;
    bool  _hasUseCase;
    bool  _starting;
    unsigned long long  _useCase;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStarting;
@property (nonatomic) bool hasUseCase;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long useCase;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasStarting;
- (bool)hasUseCase;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 useCase:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (void)setHasUseCase:(bool)arg1;
- (bool)starting;
- (unsigned long long)useCase;
- (void)writeTo:(id)arg1;

@end
