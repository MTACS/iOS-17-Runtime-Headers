
@interface ATXPBProactiveSuggestionExecutableSpecification : PBCodable <NSCopying> {
    NSData * _executable;
    NSString * _executableClassString;
    NSString * _executableDescription;
    NSString * _executableIdentifier;
    unsigned long long  _executableObjectHash;
    int  _executableType;
    struct { 
        unsigned int executableObjectHash : 1; 
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
