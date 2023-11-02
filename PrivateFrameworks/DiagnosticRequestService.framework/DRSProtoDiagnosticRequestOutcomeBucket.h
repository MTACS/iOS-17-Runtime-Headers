
@interface DRSProtoDiagnosticRequestOutcomeBucket : PBCodable <NSCopying> {
    unsigned long long  _count;
    struct { 
        unsigned int count : 1; 
        unsigned int outcome : 1; 
        unsigned int requestState : 1; 
    }  _has;
    int  _outcome;
    int  _requestState;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasOutcome;
@property (nonatomic) bool hasRequestState;
@property (nonatomic) int outcome;
@property (nonatomic) int requestState;

- (int)StringAsOutcome:(id)arg1;
- (int)StringAsRequestState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasOutcome;
- (bool)hasRequestState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outcome;
- (id)outcomeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestState;
- (id)requestStateAsString:(int)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasOutcome:(bool)arg1;
- (void)setHasRequestState:(bool)arg1;
- (void)setOutcome:(int)arg1;
- (void)setRequestState:(int)arg1;
- (void)writeTo:(id)arg1;

@end
