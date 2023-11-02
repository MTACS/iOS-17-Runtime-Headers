
@interface AWDHomeKitProcessMemoryPressureEvent : PBCodable <NSCopying> {
    NSString * _dataSyncState;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _processMemoryState;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *dataSyncState;
@property (nonatomic, readonly) bool hasDataSyncState;
@property (nonatomic, readonly) bool hasProcessMemoryState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *processMemoryState;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSyncState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataSyncState;
- (bool)hasProcessMemoryState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)processMemoryState;
- (bool)readFrom:(id)arg1;
- (void)setDataSyncState:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProcessMemoryState:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
