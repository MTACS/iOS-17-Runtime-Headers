
@interface NPKProtoStandalonePaymentProvisioningFlowResponse : PBCodable <NSCopying> {
    NPKProtoStandalonePaymentProvisioningFlowStepContext * _context;
    int  _fromStep;
    NPKProtoStandaloneResponseHeader * _responseHeader;
    int  _toStep;
}

@property (nonatomic, retain) NPKProtoStandalonePaymentProvisioningFlowStepContext *context;
@property (nonatomic) int fromStep;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, retain) NPKProtoStandaloneResponseHeader *responseHeader;
@property (nonatomic) int toStep;

- (void).cxx_destruct;
- (int)StringAsFromStep:(id)arg1;
- (int)StringAsToStep:(id)arg1;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fromStep;
- (id)fromStepAsString:(int)arg1;
- (bool)hasContext;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseHeader;
- (void)setContext:(id)arg1;
- (void)setFromStep:(int)arg1;
- (void)setResponseHeader:(id)arg1;
- (void)setToStep:(int)arg1;
- (int)toStep;
- (id)toStepAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
