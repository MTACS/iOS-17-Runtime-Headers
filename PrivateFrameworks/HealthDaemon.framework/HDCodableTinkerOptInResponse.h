
@interface HDCodableTinkerOptInResponse : PBCodable <NSCopying> {
    bool  _accepted;
    HDCodableError * _error;
    struct { 
        unsigned int accepted : 1; 
    }  _has;
    NSString * _requestIdentifier;
}

@property (nonatomic) bool accepted;
@property (nonatomic, retain) HDCodableError *error;
@property (nonatomic) bool hasAccepted;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, retain) NSString *requestIdentifier;

- (void).cxx_destruct;
- (bool)accepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasAccepted;
- (bool)hasError;
- (bool)hasRequestIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setAccepted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHasAccepted:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
