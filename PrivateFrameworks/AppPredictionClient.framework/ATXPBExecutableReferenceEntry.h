
@interface ATXPBExecutableReferenceEntry : PBCodable <NSCopying> {
    NSString * _clientModelId;
    double  _date;
    struct { 
        unsigned int date : 1; 
        unsigned int shouldClearOnEngagement : 1; 
        unsigned int shouldPurge : 1; 
        unsigned int suggestionIsHidden : 1; 
    }  _has;
    bool  _shouldClearOnEngagement;
    bool  _shouldPurge;
    bool  _suggestionIsHidden;
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
