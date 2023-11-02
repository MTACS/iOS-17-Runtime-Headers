
@interface POMMESSchemaPOMMESResourceDownloadEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int resourceDownloadSizeInBytes : 1; 
    }  _has;
    unsigned int  _resourceDownloadSizeInBytes;
}

@property (nonatomic) bool hasResourceDownloadSizeInBytes;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int resourceDownloadSizeInBytes;

- (void)deleteResourceDownloadSizeInBytes;
- (id)dictionaryRepresentation;
- (bool)hasResourceDownloadSizeInBytes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)resourceDownloadSizeInBytes;
- (void)setHasResourceDownloadSizeInBytes:(bool)arg1;
- (void)setResourceDownloadSizeInBytes:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
