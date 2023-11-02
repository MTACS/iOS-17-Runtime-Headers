
@interface NPKProtoCommutePlanReminderForCommutePlanAndPassRequest : PBRequest <NSCopying> {
    NSData * _commutePlanBytes;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSData *commutePlanBytes;
@property (nonatomic, readonly) bool hasCommutePlanBytes;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)commutePlanBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommutePlanBytes;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommutePlanBytes:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
