
@interface NTPBAlternateHeadline : PBCodable <NSCopying> {
    int  _articleHeadlineTreatmentId;
    int  _articleHeadlineTreatmentState;
    struct { 
        unsigned int articleHeadlineTreatmentId : 1; 
        unsigned int articleHeadlineTreatmentState : 1; 
    }  _has;
}

@property (nonatomic) int articleHeadlineTreatmentId;
@property (nonatomic) int articleHeadlineTreatmentState;
@property (nonatomic) bool hasArticleHeadlineTreatmentId;
@property (nonatomic) bool hasArticleHeadlineTreatmentState;

- (int)articleHeadlineTreatmentId;
- (int)articleHeadlineTreatmentState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleHeadlineTreatmentId;
- (bool)hasArticleHeadlineTreatmentState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleHeadlineTreatmentId:(int)arg1;
- (void)setArticleHeadlineTreatmentState:(int)arg1;
- (void)setHasArticleHeadlineTreatmentId:(bool)arg1;
- (void)setHasArticleHeadlineTreatmentState:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
