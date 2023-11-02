
@interface POMMESSchemaPOMMESResourceDownloadStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int resourceType : 1; 
    }  _has;
    int  _resourceType;
}

@property (nonatomic) bool hasResourceType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int resourceType;

- (void)deleteResourceType;
- (id)dictionaryRepresentation;
- (bool)hasResourceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)resourceType;
- (void)setHasResourceType:(bool)arg1;
- (void)setResourceType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
