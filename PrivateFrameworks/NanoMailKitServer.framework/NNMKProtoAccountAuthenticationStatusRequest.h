
@interface NNMKProtoAccountAuthenticationStatusRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int requestTime : 1; 
    }  _has;
    double  _requestTime;
}

@property (nonatomic) bool hasRequestTime;
@property (nonatomic) double requestTime;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)requestTime;
- (void)setHasRequestTime:(bool)arg1;
- (void)setRequestTime:(double)arg1;
- (void)writeTo:(id)arg1;

@end
