
@interface HDCodableHighlightDay : PBCodable <NSCopying> {
    double  _date;
    struct { 
        unsigned int date : 1; 
        unsigned int isPaddedDay : 1; 
        unsigned int status : 1; 
    }  _has;
    bool  _isPaddedDay;
    bool  _status;
}

@property (nonatomic) double date;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasIsPaddedDay;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool isPaddedDay;
@property (nonatomic) bool status;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDate;
- (bool)hasIsPaddedDay;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPaddedDay;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasIsPaddedDay:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIsPaddedDay:(bool)arg1;
- (void)setStatus:(bool)arg1;
- (bool)status;
- (void)writeTo:(id)arg1;

@end
