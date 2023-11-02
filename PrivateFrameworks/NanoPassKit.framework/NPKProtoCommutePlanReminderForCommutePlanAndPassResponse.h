
@interface NPKProtoCommutePlanReminderForCommutePlanAndPassResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int reminderInterval : 1; 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
    double  _reminderInterval;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasReminderInterval;
@property (nonatomic) bool pending;
@property (nonatomic) double reminderInterval;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPending;
- (bool)hasReminderInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (double)reminderInterval;
- (void)setErrorData:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasReminderInterval:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setReminderInterval:(double)arg1;
- (void)writeTo:(id)arg1;

@end
