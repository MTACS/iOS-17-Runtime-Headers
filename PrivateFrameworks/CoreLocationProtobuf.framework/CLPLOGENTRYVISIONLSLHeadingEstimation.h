
@interface CLPLOGENTRYVISIONLSLHeadingEstimation : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
        unsigned int statusDEPRECATED : 1; 
    }  _has;
    NSMutableArray * _headings;
    int  _status;
    int  _statusDEPRECATED;
}

@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasStatusDEPRECATED;
@property (nonatomic, retain) NSMutableArray *headings;
@property (nonatomic) int status;
@property (nonatomic) int statusDEPRECATED;

+ (Class)headingsType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsStatusDEPRECATED:(id)arg1;
- (void)addHeadings:(id)arg1;
- (void)clearHeadings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatus;
- (bool)hasStatusDEPRECATED;
- (unsigned long long)hash;
- (id)headings;
- (id)headingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)headingsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasStatusDEPRECATED:(bool)arg1;
- (void)setHeadings:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusDEPRECATED:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (int)statusDEPRECATED;
- (id)statusDEPRECATEDAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
