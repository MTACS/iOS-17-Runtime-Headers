
@interface TRITrialDownloadStatusFields : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    int  _status;
}

@property (nonatomic) bool hasStatus;
@property (nonatomic) int status;

- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
