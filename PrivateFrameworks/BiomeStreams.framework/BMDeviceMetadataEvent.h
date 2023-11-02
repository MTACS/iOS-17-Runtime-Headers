
@interface BMDeviceMetadataEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _build;
    NSString * _name;
    long long  _platform;
    bool  _rapidSecurityResponsePreReboot;
    NSString * _supplementalBuild;
}

@property (nonatomic, readonly, copy) NSString *build;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) bool rapidSecurityResponsePreReboot;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *supplementalBuild;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)build;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 build:(id)arg2 platform:(long long)arg3;
- (id)initWithName:(id)arg1 build:(id)arg2 supplementalBuild:(id)arg3 platform:(long long)arg4;
- (id)initWithName:(id)arg1 build:(id)arg2 supplementalBuild:(id)arg3 platform:(long long)arg4 rapidSecurityResponsePreReboot:(bool)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)name;
- (long long)platform;
- (id)proto;
- (bool)rapidSecurityResponsePreReboot;
- (id)serialize;
- (id)supplementalBuild;

@end
