
@interface SGM2HarvestCostBreakdown : PBCodable <NSCopying> {
    NSString * _componentName;
    int  _documentSource;
    struct { 
        unsigned int documentSource : 1; 
        unsigned int significantWork : 1; 
    }  _has;
    bool  _significantWork;
}

@property (nonatomic, retain) NSString *componentName;
@property (nonatomic) int documentSource;
@property (nonatomic, readonly) bool hasComponentName;
@property (nonatomic) bool hasDocumentSource;
@property (nonatomic) bool hasSignificantWork;
@property (nonatomic) bool significantWork;

- (void).cxx_destruct;
- (int)StringAsDocumentSource:(id)arg1;
- (id)componentName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)documentSource;
- (id)documentSourceAsString:(int)arg1;
- (bool)hasComponentName;
- (bool)hasDocumentSource;
- (bool)hasSignificantWork;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setDocumentSource:(int)arg1;
- (void)setHasDocumentSource:(bool)arg1;
- (void)setHasSignificantWork:(bool)arg1;
- (void)setSignificantWork:(bool)arg1;
- (bool)significantWork;
- (void)writeTo:(id)arg1;

@end
