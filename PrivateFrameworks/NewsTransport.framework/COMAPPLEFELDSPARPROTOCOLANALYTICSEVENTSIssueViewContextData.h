
@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewContextData : PBCodable <NSCopying> {
    struct { 
        unsigned int issueViewContext : 1; 
    }  _has;
    int  _issueViewContext;
}

@property (nonatomic) bool hasIssueViewContext;
@property (nonatomic) int issueViewContext;

- (int)StringAsIssueViewContext:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIssueViewContext;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)issueViewContext;
- (id)issueViewContextAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIssueViewContext:(bool)arg1;
- (void)setIssueViewContext:(int)arg1;
- (void)writeTo:(id)arg1;

@end
