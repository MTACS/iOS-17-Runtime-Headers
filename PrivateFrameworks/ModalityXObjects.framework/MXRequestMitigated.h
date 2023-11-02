
@interface MXRequestMitigated : PBCodable <NSCopying> {
    struct { 
        unsigned int mitigationType : 1; 
    }  _has;
    int  _mitigationType;
    NSString * _requestId;
}

@property (nonatomic) bool hasMitigationType;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic) int mitigationType;
@property (nonatomic, retain) NSString *requestId;

- (void).cxx_destruct;
- (int)StringAsMitigationType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMitigationType;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mitigationType;
- (id)mitigationTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setHasMitigationType:(bool)arg1;
- (void)setMitigationType:(int)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
