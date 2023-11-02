
@interface POMMESSchemaPOMMESOnDeviceMetadata : SISchemaInstrumentationMessage {
    bool  _hasOnScreenAppBundleIdDomain;
    bool  _hasOnScreenUriDomain;
    NSString * _onScreenAppBundleIdDomain;
    NSString * _onScreenUriDomain;
}

@property (nonatomic) bool hasOnScreenAppBundleIdDomain;
@property (nonatomic) bool hasOnScreenUriDomain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *onScreenAppBundleIdDomain;
@property (nonatomic, copy) NSString *onScreenUriDomain;

- (void).cxx_destruct;
- (void)deleteOnScreenAppBundleIdDomain;
- (void)deleteOnScreenUriDomain;
- (id)dictionaryRepresentation;
- (bool)hasOnScreenAppBundleIdDomain;
- (bool)hasOnScreenUriDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)onScreenAppBundleIdDomain;
- (id)onScreenUriDomain;
- (bool)readFrom:(id)arg1;
- (void)setHasOnScreenAppBundleIdDomain:(bool)arg1;
- (void)setHasOnScreenUriDomain:(bool)arg1;
- (void)setOnScreenAppBundleIdDomain:(id)arg1;
- (void)setOnScreenUriDomain:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
