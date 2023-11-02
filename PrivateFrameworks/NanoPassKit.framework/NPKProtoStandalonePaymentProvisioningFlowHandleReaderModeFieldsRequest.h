
@interface NPKProtoStandalonePaymentProvisioningFlowHandleReaderModeFieldsRequest : PBRequest <NSCopying> {
    NSMutableArray * _readerModeFields;
    NPKProtoStandaloneRequestHeader * _requestHeader;
}

@property (nonatomic, retain) NSMutableArray *readerModeFields;
@property (nonatomic, retain) NPKProtoStandaloneRequestHeader *requestHeader;

+ (Class)readerModeFieldsType;

- (void).cxx_destruct;
- (void)addReaderModeFields:(id)arg1;
- (void)clearReaderModeFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)readerModeFields;
- (id)readerModeFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)readerModeFieldsCount;
- (id)requestHeader;
- (void)setReaderModeFields:(id)arg1;
- (void)setRequestHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
