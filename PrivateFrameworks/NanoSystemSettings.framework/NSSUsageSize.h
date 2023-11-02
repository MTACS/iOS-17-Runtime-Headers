
@interface NSSUsageSize : PBCodable <NSCopying> {
    unsigned long long  _docsAndData;
    unsigned long long  _fixed;
    struct { 
        unsigned int docsAndData : 1; 
        unsigned int fixed : 1; 
        unsigned int purgeable : 1; 
    }  _has;
    unsigned long long  _purgeable;
}

@property (nonatomic) unsigned long long docsAndData;
@property (nonatomic) unsigned long long fixed;
@property (nonatomic) bool hasDocsAndData;
@property (nonatomic) bool hasFixed;
@property (nonatomic) bool hasPurgeable;
@property (nonatomic) unsigned long long purgeable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)docsAndData;
- (unsigned long long)fixed;
- (bool)hasDocsAndData;
- (bool)hasFixed;
- (bool)hasPurgeable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)purgeable;
- (bool)readFrom:(id)arg1;
- (void)setDocsAndData:(unsigned long long)arg1;
- (void)setFixed:(unsigned long long)arg1;
- (void)setHasDocsAndData:(bool)arg1;
- (void)setHasFixed:(bool)arg1;
- (void)setHasPurgeable:(bool)arg1;
- (void)setPurgeable:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
