
@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying> {
    struct { 
        unsigned int numericValue : 1; 
        unsigned int identifier : 1; 
    }  _has;
    int  _identifier;
    unsigned long long  _numericValue;
    NSString * _stringValue;
}

@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasNumericValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) int identifier;
@property (nonatomic) unsigned long long numericValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (int)StringAsIdentifier:(id)arg1;
- (void)clearOneofValuesForIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasNumericValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (int)identifier;
- (id)identifierAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numericValue;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasNumericValue:(bool)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setNumericValue:(unsigned long long)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
