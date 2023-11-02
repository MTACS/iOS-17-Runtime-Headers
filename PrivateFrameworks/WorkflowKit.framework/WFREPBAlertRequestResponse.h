
@interface WFREPBAlertRequestResponse : PBCodable <NSCopying> {
    WFREPBError * _error;
    NSString * _requestIdentifier;
    NSString * _selectedButton;
}

@property (nonatomic, retain) WFREPBError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasSelectedButton;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, retain) NSString *selectedButton;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasSelectedButton;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (id)selectedButton;
- (void)setError:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSelectedButton:(id)arg1;
- (void)writeTo:(id)arg1;

@end
