
@interface ANCSchemaANCServerUserResponseEvaluated : SISchemaInstrumentationMessage {
    struct { 
        unsigned int userResponseCategory : 1; 
    }  _has;
    int  _userResponseCategory;
}

@property (nonatomic) bool hasUserResponseCategory;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int userResponseCategory;

- (void)deleteUserResponseCategory;
- (id)dictionaryRepresentation;
- (bool)hasUserResponseCategory;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUserResponseCategory:(bool)arg1;
- (void)setUserResponseCategory:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)userResponseCategory;
- (void)writeTo:(id)arg1;

@end
