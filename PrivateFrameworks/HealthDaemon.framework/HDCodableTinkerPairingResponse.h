
@interface HDCodableTinkerPairingResponse : PBCodable <NSCopying> {
    HDCodableError * _error;
    NSString * _requestIdentifier;
    HDCodableSharingSetupMetadata * _setupMetadata;
}

@property (nonatomic, retain) HDCodableError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, readonly) bool hasSetupMetadata;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, retain) HDCodableSharingSetupMetadata *setupMetadata;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasRequestIdentifier;
- (bool)hasSetupMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setError:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSetupMetadata:(id)arg1;
- (id)setupMetadata;
- (void)writeTo:(id)arg1;

@end
