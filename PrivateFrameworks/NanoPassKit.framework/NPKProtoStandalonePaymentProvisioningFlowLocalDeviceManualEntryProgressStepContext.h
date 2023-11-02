
@interface NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext : PBCodable <NSCopying> {
    struct { 
        unsigned int numericEntryPending : 1; 
    }  _has;
    bool  _numericEntryPending;
}

@property (nonatomic) bool hasNumericEntryPending;
@property (nonatomic) bool numericEntryPending;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumericEntryPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)numericEntryPending;
- (bool)readFrom:(id)arg1;
- (void)setHasNumericEntryPending:(bool)arg1;
- (void)setNumericEntryPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
