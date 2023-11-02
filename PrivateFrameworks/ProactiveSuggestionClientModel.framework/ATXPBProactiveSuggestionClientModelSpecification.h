
@interface ATXPBProactiveSuggestionClientModelSpecification : PBCodable <NSCopying> {
    NSString * _clientModelId;
    NSString * _clientModelVersion;
    int  _engagementResetPolicy;
    struct { 
        unsigned int engagementResetPolicy : 1; 
    }  _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
