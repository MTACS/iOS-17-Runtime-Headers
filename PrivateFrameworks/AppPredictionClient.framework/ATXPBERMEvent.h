
@interface ATXPBERMEvent : PBCodable <NSCopying> {
    NSMutableArray * _clientModelIds;
    double  _dateEngaged;
    unsigned long long  _engagementType;
    double  _eventDate;
    int  _eventType;
    NSData * _executable;
    int  _executableType;
    struct { 
        unsigned int dateEngaged : 1; 
        unsigned int engagementType : 1; 
        unsigned int eventDate : 1; 
        unsigned int eventType : 1; 
        unsigned int executableType : 1; 
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
