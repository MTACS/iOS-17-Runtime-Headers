
@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying> {
    bool  _cameraFirstProvisioningEnabled;
    struct { 
        unsigned int cameraFirstProvisioningEnabled : 1; 
    }  _has;
    NSMutableArray * _setupFields;
}

@property (nonatomic) bool cameraFirstProvisioningEnabled;
@property (nonatomic) bool hasCameraFirstProvisioningEnabled;
@property (nonatomic, retain) NSMutableArray *setupFields;

+ (Class)setupFieldsType;

- (void).cxx_destruct;
- (void)addSetupFields:(id)arg1;
- (bool)cameraFirstProvisioningEnabled;
- (void)clearSetupFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraFirstProvisioningEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCameraFirstProvisioningEnabled:(bool)arg1;
- (void)setHasCameraFirstProvisioningEnabled:(bool)arg1;
- (void)setSetupFields:(id)arg1;
- (id)setupFields;
- (id)setupFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)setupFieldsCount;
- (void)writeTo:(id)arg1;

@end
