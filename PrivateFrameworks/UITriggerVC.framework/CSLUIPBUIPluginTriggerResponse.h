
@interface CSLUIPBUIPluginTriggerResponse : PBCodable <NSCopying> {
    NSString * _errorString;
    bool  _success;
}

@property (nonatomic, retain) NSString *errorString;
@property (nonatomic, readonly) bool hasErrorString;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorString;
- (bool)hasErrorString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorString:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
