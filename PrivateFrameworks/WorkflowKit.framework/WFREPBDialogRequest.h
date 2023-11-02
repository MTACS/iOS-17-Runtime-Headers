
@interface WFREPBDialogRequest : PBRequest <NSCopying> {
    NSData * _dialogRequestData;
    NSString * _runRequestIdentifier;
}

@property (nonatomic, retain) NSData *dialogRequestData;
@property (nonatomic, retain) NSString *runRequestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialogRequestData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)runRequestIdentifier;
- (void)setDialogRequestData:(id)arg1;
- (void)setRunRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
