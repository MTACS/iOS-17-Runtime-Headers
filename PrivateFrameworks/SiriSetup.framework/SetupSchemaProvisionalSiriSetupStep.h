
@interface SetupSchemaProvisionalSiriSetupStep : SISchemaInstrumentationMessage {
    struct { 
        unsigned int page : 1; 
    }  _has;
    int  _page;
}

@property (nonatomic) bool hasPage;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int page;

- (void)deletePage;
- (id)dictionaryRepresentation;
- (bool)hasPage;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)page;
- (bool)readFrom:(id)arg1;
- (void)setHasPage:(bool)arg1;
- (void)setPage:(int)arg1;
- (void)writeTo:(id)arg1;

@end
