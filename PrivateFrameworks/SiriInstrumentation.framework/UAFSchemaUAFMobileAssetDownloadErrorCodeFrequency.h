
@interface UAFSchemaUAFMobileAssetDownloadErrorCodeFrequency : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mobileAssetDownloadErrorCode : 1; 
        unsigned int timesOccurred : 1; 
    }  _has;
    unsigned int  _mobileAssetDownloadErrorCode;
    unsigned int  _timesOccurred;
}

@property (nonatomic) bool hasMobileAssetDownloadErrorCode;
@property (nonatomic) bool hasTimesOccurred;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int mobileAssetDownloadErrorCode;
@property (nonatomic) unsigned int timesOccurred;

- (void)deleteMobileAssetDownloadErrorCode;
- (void)deleteTimesOccurred;
- (id)dictionaryRepresentation;
- (bool)hasMobileAssetDownloadErrorCode;
- (bool)hasTimesOccurred;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)mobileAssetDownloadErrorCode;
- (bool)readFrom:(id)arg1;
- (void)setHasMobileAssetDownloadErrorCode:(bool)arg1;
- (void)setHasTimesOccurred:(bool)arg1;
- (void)setMobileAssetDownloadErrorCode:(unsigned int)arg1;
- (void)setTimesOccurred:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)timesOccurred;
- (void)writeTo:(id)arg1;

@end
