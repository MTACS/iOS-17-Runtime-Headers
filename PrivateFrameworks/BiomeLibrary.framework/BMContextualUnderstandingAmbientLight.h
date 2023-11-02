
@interface BMContextualUnderstandingAmbientLight : BMEventBase <BMStoreData> {
    double  _ambientLightColorComponent0;
    double  _ambientLightColorComponent1;
    double  _ambientLightColorComponent2;
    bool  _hasAmbientLightColorComponent0;
    bool  _hasAmbientLightColorComponent1;
    bool  _hasAmbientLightColorComponent2;
}

@property (nonatomic, readonly) double ambientLightColorComponent0;
@property (nonatomic, readonly) double ambientLightColorComponent1;
@property (nonatomic, readonly) double ambientLightColorComponent2;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAmbientLightColorComponent0;
@property (nonatomic) bool hasAmbientLightColorComponent1;
@property (nonatomic) bool hasAmbientLightColorComponent2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (double)ambientLightColorComponent0;
- (double)ambientLightColorComponent1;
- (double)ambientLightColorComponent2;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAmbientLightColorComponent0;
- (bool)hasAmbientLightColorComponent1;
- (bool)hasAmbientLightColorComponent2;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAmbientLightColorComponent0:(id)arg1 ambientLightColorComponent1:(id)arg2 ambientLightColorComponent2:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasAmbientLightColorComponent0:(bool)arg1;
- (void)setHasAmbientLightColorComponent1:(bool)arg1;
- (void)setHasAmbientLightColorComponent2:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
