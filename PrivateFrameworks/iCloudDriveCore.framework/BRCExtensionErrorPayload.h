
@interface BRCExtensionErrorPayload : PBCodable <NSCopying> {
    NSString * _minimumOSName;
    NSString * _recordId;
}

@property (nonatomic, readonly) bool hasMinimumOSName;
@property (nonatomic, readonly) bool hasRecordId;
@property (nonatomic, retain) NSString *minimumOSName;
@property (nonatomic, retain) NSString *recordId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumOSName;
- (bool)hasRecordId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minimumOSName;
- (bool)readFrom:(id)arg1;
- (id)recordId;
- (void)setMinimumOSName:(id)arg1;
- (void)setRecordId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
