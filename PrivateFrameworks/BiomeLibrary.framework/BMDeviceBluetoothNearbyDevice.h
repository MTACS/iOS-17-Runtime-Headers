
@interface BMDeviceBluetoothNearbyDevice : BMEventBase <BMStoreData> {
    bool  _hasInitiator;
    bool  _hasStarting;
    bool  _hasUseCase;
    bool  _initiator;
    NSString * _localIdentifier;
    bool  _starting;
    unsigned long long  _useCase;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInitiator;
@property (nonatomic) bool hasStarting;
@property (nonatomic) bool hasUseCase;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initiator;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long useCase;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasInitiator;
- (bool)hasStarting;
- (bool)hasUseCase;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInitiator:(id)arg1 localIdentifier:(id)arg2 starting:(id)arg3 useCase:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)initiator;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)localIdentifier;
- (id)serialize;
- (void)setHasInitiator:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setHasUseCase:(bool)arg1;
- (bool)starting;
- (unsigned long long)useCase;
- (void)writeTo:(id)arg1;

@end
