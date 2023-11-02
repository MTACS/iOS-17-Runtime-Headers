
@interface NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext : PBCodable <NSCopying> {
    NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext * _secondaryManualEntryStepContext;
}

@property (nonatomic, retain) NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *secondaryManualEntryStepContext;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondaryManualEntryStepContext;
- (void)setSecondaryManualEntryStepContext:(id)arg1;
- (void)writeTo:(id)arg1;

@end
