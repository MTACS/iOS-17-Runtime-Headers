
@interface NPKProtoStandalonePaymentProvisioningFlowHandleManualEntryFieldsRequest : PBRequest <NSCopying> {
    NSMutableArray * _manualEntryFields;
    NPKProtoStandaloneRequestHeader * _requestHeader;
}

@property (nonatomic, retain) NSMutableArray *manualEntryFields;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;

+ (Class)manualEntryFieldsType;

- (void).cxx_destruct;
- (void)addManualEntryFields:(id)arg1;
- (void)clearManualEntryFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manualEntryFields;
- (id)manualEntryFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)manualEntryFieldsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestHeader;
- (void)setManualEntryFields:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
