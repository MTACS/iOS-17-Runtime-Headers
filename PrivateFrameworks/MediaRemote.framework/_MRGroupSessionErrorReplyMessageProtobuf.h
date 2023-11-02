
@interface _MRGroupSessionErrorReplyMessageProtobuf : PBCodable <NSCopying> {
    NSString * _errorMessage;
}

@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, readonly) bool hasErrorMessage;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorMessage;
- (bool)hasErrorMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
