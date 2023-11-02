
@interface BMDevicePluggedIn : BMEventBase <BMStoreData> {
    long long  _adapterType;
    bool  _hasAdapterType;
    bool  _hasStarting;
    bool  _hasWireless;
    bool  _starting;
    bool  _wireless;
}

@property (nonatomic, readonly) long long adapterType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAdapterType;
@property (nonatomic) bool hasStarting;
@property (nonatomic) bool hasWireless;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wireless;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (long long)adapterType;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAdapterType;
- (bool)hasStarting;
- (bool)hasWireless;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 wireless:(id)arg2 adapterType:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasAdapterType:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setHasWireless:(bool)arg1;
- (bool)starting;
- (bool)wireless;
- (void)writeTo:(id)arg1;

@end
