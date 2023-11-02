
@interface _MRConfigureConnectionMessageProtobuf : PBCodable <NSCopying> {
    NSString * _groupID;
}

@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) bool hasGroupID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupID;
- (bool)hasGroupID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
