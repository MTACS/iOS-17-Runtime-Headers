
@interface SIRINLUEXTERNALRRMetadata : PBCodable <NSCopying> {
    SIRINLUEXTERNALRRBoundingBox * _boundingBox;
    int  _dataSource;
    struct { 
        unsigned int dataSource : 1; 
    }  _has;
    NSMutableArray * _surroundingTexts;
}

@property (nonatomic, retain) SIRINLUEXTERNALRRBoundingBox *boundingBox;
@property (nonatomic) int dataSource;
@property (nonatomic, readonly) bool hasBoundingBox;
@property (nonatomic) bool hasDataSource;
@property (nonatomic, retain) NSMutableArray *surroundingTexts;

+ (Class)surroundingTextsType;

- (void).cxx_destruct;
- (int)StringAsDataSource:(id)arg1;
- (void)addSurroundingTexts:(id)arg1;
- (id)boundingBox;
- (void)clearSurroundingTexts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataSource;
- (id)dataSourceAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBoundingBox;
- (bool)hasDataSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoundingBox:(id)arg1;
- (void)setDataSource:(int)arg1;
- (void)setHasDataSource:(bool)arg1;
- (void)setSurroundingTexts:(id)arg1;
- (id)surroundingTexts;
- (id)surroundingTextsAtIndex:(unsigned long long)arg1;
- (unsigned long long)surroundingTextsCount;
- (void)writeTo:(id)arg1;

@end
