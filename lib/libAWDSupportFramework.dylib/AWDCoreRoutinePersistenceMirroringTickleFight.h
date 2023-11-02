
@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int operationType : 1; 
        unsigned int recordType : 1; 
    }  _has;
    int  _operationType;
    int  _recordType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _tickleTimes;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasOperationType;
@property (nonatomic) bool hasRecordType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int operationType;
@property (nonatomic) int recordType;
@property (nonatomic, readonly) int*tickleTimes;
@property (nonatomic, readonly) unsigned long long tickleTimesCount;
@property (nonatomic) unsigned long long timestamp;

- (void)addTickleTimes:(int)arg1;
- (void)clearTickleTimes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOperationType;
- (bool)hasRecordType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operationType;
- (bool)readFrom:(id)arg1;
- (int)recordType;
- (void)setHasOperationType:(bool)arg1;
- (void)setHasRecordType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOperationType:(int)arg1;
- (void)setRecordType:(int)arg1;
- (void)setTickleTimes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (int*)tickleTimes;
- (int)tickleTimesAtIndex:(unsigned long long)arg1;
- (unsigned long long)tickleTimesCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
