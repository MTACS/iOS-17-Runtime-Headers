
@interface BMDeviceMetadata : BMEventBase <BMStoreData> {
    NSString * _build;
    bool  _hasRapidSecurityResponsePreReboot;
    NSString * _name;
    int  _platform;
    bool  _rapidSecurityResponsePreReboot;
    NSString * _supplementalBuild;
}

@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRapidSecurityResponsePreReboot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int platform;
@property (nonatomic, readonly) bool rapidSecurityResponsePreReboot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *supplementalBuild;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)build;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasRapidSecurityResponsePreReboot;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 build:(id)arg2 platform:(int)arg3 supplementalBuild:(id)arg4 rapidSecurityResponsePreReboot:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (int)platform;
- (bool)rapidSecurityResponsePreReboot;
- (id)serialize;
- (void)setHasRapidSecurityResponsePreReboot:(bool)arg1;
- (id)supplementalBuild;
- (void)writeTo:(id)arg1;

@end
