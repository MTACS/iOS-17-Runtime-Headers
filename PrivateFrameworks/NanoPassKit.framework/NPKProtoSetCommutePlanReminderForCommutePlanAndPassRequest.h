
@interface NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest : PBRequest <NSCopying> {
    NSData * _commutePlanBytes;
    struct { 
        unsigned int reminderInterval : 1; 
    }  _has;
    double  _reminderInterval;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSData *commutePlanBytes;
@property (nonatomic, readonly) bool hasCommutePlanBytes;
@property (nonatomic) bool hasReminderInterval;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic) double reminderInterval;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)commutePlanBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommutePlanBytes;
- (bool)hasReminderInterval;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)reminderInterval;
- (void)setCommutePlanBytes:(id)arg1;
- (void)setHasReminderInterval:(bool)arg1;
- (void)setReminderInterval:(double)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
