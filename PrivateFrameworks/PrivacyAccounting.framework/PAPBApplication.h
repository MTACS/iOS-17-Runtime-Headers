
@interface PAPBApplication : PBCodable <NSCopying> {
    struct { 
        unsigned int identifierType : 1; 
    }  _has;
    NSString * _identifier;
    int  _identifierType;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIdentifierType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int identifierType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasIdentifierType;
- (unsigned long long)hash;
- (id)identifier;
- (int)identifierType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentifierType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifierType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
