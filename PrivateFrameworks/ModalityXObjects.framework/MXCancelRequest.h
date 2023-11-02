
@interface MXCancelRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    NSString * _requestId;
}

@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic) int reason;
@property (nonatomic, retain) NSString *requestId;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (id)requestId;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
