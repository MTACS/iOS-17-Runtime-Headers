
@interface SIRINLUEXTERNALUUID : PBCodable <NSCopying> {
    struct { 
        unsigned int highInt : 1; 
        unsigned int lowInt : 1; 
        unsigned int namespaceA : 1; 
    }  _has;
    unsigned long long  _highInt;
    unsigned long long  _lowInt;
    int  _namespaceA;
}

@property (nonatomic) bool hasHighInt;
@property (nonatomic) bool hasLowInt;
@property (nonatomic) bool hasNamespaceA;
@property (nonatomic) unsigned long long highInt;
@property (nonatomic) unsigned long long lowInt;
@property (nonatomic) int namespaceA;

- (int)StringAsNamespaceA:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHighInt;
- (bool)hasLowInt;
- (bool)hasNamespaceA;
- (unsigned long long)hash;
- (unsigned long long)highInt;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lowInt;
- (void)mergeFrom:(id)arg1;
- (int)namespaceA;
- (id)namespaceAAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHighInt:(bool)arg1;
- (void)setHasLowInt:(bool)arg1;
- (void)setHasNamespaceA:(bool)arg1;
- (void)setHighInt:(unsigned long long)arg1;
- (void)setLowInt:(unsigned long long)arg1;
- (void)setNamespaceA:(int)arg1;
- (void)writeTo:(id)arg1;

@end
