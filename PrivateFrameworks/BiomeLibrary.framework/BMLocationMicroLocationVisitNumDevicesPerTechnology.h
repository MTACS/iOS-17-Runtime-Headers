
@interface BMLocationMicroLocationVisitNumDevicesPerTechnology : BMEventBase <BMStoreData> {
    bool  _hasNumDevices;
    int  _numDevices;
    NSString * _technology;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasNumDevices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int numDevices;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *technology;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasNumDevices;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTechnology:(id)arg1 numDevices:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)numDevices;
- (id)serialize;
- (void)setHasNumDevices:(bool)arg1;
- (id)technology;
- (void)writeTo:(id)arg1;

@end
