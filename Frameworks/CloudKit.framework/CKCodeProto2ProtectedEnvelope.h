
@interface CKCodeProto2ProtectedEnvelope : PBCodable <NSCopying> {
    int  _contents;
    NSData * _encrypted;
    struct { 
        unsigned int contents : 1; 
    }  _has;
    CKCodeProto2Any * _value;
}

@property (nonatomic) int contents;
@property (nonatomic, retain) NSData *encrypted;
@property (nonatomic) bool hasContents;
@property (nonatomic, readonly) bool hasEncrypted;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) CKCodeProto2Any *value;

- (void).cxx_destruct;
- (int)StringAsContents:(id)arg1;
- (void)clearOneofValuesForContents;
- (int)contents;
- (id)contentsAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encrypted;
- (bool)hasContents;
- (bool)hasEncrypted;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContents:(int)arg1;
- (void)setEncrypted:(id)arg1;
- (void)setHasContents:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
