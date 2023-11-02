
@interface BMDeviceBootSession : BMEventBase <BMStoreData> {
    bool  _hasStarting;
    NSData * _raw_bootUUID;
    bool  _starting;
}

@property (nonatomic, readonly) NSUUID *bootUUID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bootUUID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBootUUID:(id)arg1 starting:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (void)writeTo:(id)arg1;

@end
