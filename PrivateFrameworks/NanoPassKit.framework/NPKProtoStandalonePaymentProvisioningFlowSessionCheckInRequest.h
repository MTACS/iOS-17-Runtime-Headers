
@interface NPKProtoStandalonePaymentProvisioningFlowSessionCheckInRequest : PBRequest <NSCopying> {
    NPKProtoStandaloneResponseHeader * _requestHeader;
}

@property (nonatomic, retain) NPKProtoStandaloneResponseHeader *requestHeader;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setRequestHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
