
@interface NPKProtoStandalonePaymentProvisioningFlowChooseProductRequest : PBRequest <NSCopying> {
    NSString * _chosenProductIdentifier;
    NPKProtoStandaloneRequestHeader * _requestHeader;
}

@property (nonatomic, retain) NSString *chosenProductIdentifier;
@property (nonatomic, readonly) bool hasChosenProductIdentifier;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;

- (void).cxx_destruct;
- (id)chosenProductIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChosenProductIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setChosenProductIdentifier:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
