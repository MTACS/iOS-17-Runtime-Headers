
@interface SYResetResponse : PBCodable <NSCopying> {
    bool  _accepted;
    SYErrorInfo * _error;
    SYMessageHeader * _header;
}

@property (nonatomic) bool accepted;
@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) SYMessageHeader *header;

- (void).cxx_destruct;
- (bool)accepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccepted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
