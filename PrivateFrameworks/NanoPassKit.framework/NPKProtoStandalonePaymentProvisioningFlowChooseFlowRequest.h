
@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowRequest : PBRequest <NSCopying> {
    NSString * _chosenFlowPickerItemIdentifier;
    NPKProtoStandaloneRequestHeader * _requestHeader;
}

@property (nonatomic, retain) NSString *chosenFlowPickerItemIdentifier;
@property (nonatomic, readonly) bool hasChosenFlowPickerItemIdentifier;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;

- (void).cxx_destruct;
- (id)chosenFlowPickerItemIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChosenFlowPickerItemIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setChosenFlowPickerItemIdentifier:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
