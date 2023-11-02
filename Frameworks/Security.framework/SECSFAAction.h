
@interface SECSFAAction : PBCodable <NSCopying> {
    SECSFAActionAutomaticBugCapture * _abc;
    int  _action;
    SECSFAActionDropEvent * _drop;
    struct { 
        unsigned int action : 1; 
    }  _has;
    NSString * _radarnumber;
    SECSFAActionTapToRadar * _ttr;
}

@property (nonatomic, retain) SECSFAActionAutomaticBugCapture *abc;
@property (nonatomic) int action;
@property (nonatomic, retain) SECSFAActionDropEvent *drop;
@property (nonatomic, readonly) bool hasAbc;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) bool hasDrop;
@property (nonatomic, readonly) bool hasRadarnumber;
@property (nonatomic, readonly) bool hasTtr;
@property (nonatomic, retain) NSString *radarnumber;
@property (nonatomic, retain) SECSFAActionTapToRadar *ttr;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (id)abc;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)clearOneofValuesForAction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)drop;
- (bool)hasAbc;
- (bool)hasAction;
- (bool)hasDrop;
- (bool)hasRadarnumber;
- (bool)hasTtr;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)radarnumber;
- (bool)readFrom:(id)arg1;
- (void)setAbc:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setDrop:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setRadarnumber:(id)arg1;
- (void)setTtr:(id)arg1;
- (id)ttr;
- (void)writeTo:(id)arg1;

@end
