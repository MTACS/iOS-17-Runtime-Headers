
@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsRequest : PBRequest <NSCopying> {
    NSMutableArray * _chosenPaymentCredentialIdentifiers;
    NPKProtoStandaloneRequestHeader * _requestHeader;
}

@property (nonatomic, retain) NSMutableArray *chosenPaymentCredentialIdentifiers;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;

+ (Class)chosenPaymentCredentialIdentifiersType;

- (void).cxx_destruct;
- (void)addChosenPaymentCredentialIdentifiers:(id)arg1;
- (id)chosenPaymentCredentialIdentifiers;
- (id)chosenPaymentCredentialIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)chosenPaymentCredentialIdentifiersCount;
- (void)clearChosenPaymentCredentialIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setChosenPaymentCredentialIdentifiers:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
