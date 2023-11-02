
@interface AWDCoreRoutinePersistenceMirroringOperations : PBCodable <NSCopying> {
    int  _deviceClass;
    int  _errorCount;
    struct { 
        unsigned int timeIntervalSinceLastOperation : 1; 
        unsigned int timestamp : 1; 
        unsigned int deviceClass : 1; 
        unsigned int errorCount : 1; 
        unsigned int operationType : 1; 
        unsigned int qualityOfService : 1; 
        unsigned int recordsChanged : 1; 
    }  _has;
    int  _operationType;
    int  _qualityOfService;
    int  _recordsChanged;
    long long  _timeIntervalSinceLastOperation;
    unsigned long long  _timestamp;
}

@property (nonatomic) int deviceClass;
@property (nonatomic) int errorCount;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasErrorCount;
@property (nonatomic) bool hasOperationType;
@property (nonatomic) bool hasQualityOfService;
@property (nonatomic) bool hasRecordsChanged;
@property (nonatomic) bool hasTimeIntervalSinceLastOperation;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int operationType;
@property (nonatomic) int qualityOfService;
@property (nonatomic) int recordsChanged;
@property (nonatomic) long long timeIntervalSinceLastOperation;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceClass;
- (id)dictionaryRepresentation;
- (int)errorCount;
- (bool)hasDeviceClass;
- (bool)hasErrorCount;
- (bool)hasOperationType;
- (bool)hasQualityOfService;
- (bool)hasRecordsChanged;
- (bool)hasTimeIntervalSinceLastOperation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operationType;
- (int)qualityOfService;
- (bool)readFrom:(id)arg1;
- (int)recordsChanged;
- (void)setDeviceClass:(int)arg1;
- (void)setErrorCount:(int)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasErrorCount:(bool)arg1;
- (void)setHasOperationType:(bool)arg1;
- (void)setHasQualityOfService:(bool)arg1;
- (void)setHasRecordsChanged:(bool)arg1;
- (void)setHasTimeIntervalSinceLastOperation:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOperationType:(int)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setRecordsChanged:(int)arg1;
- (void)setTimeIntervalSinceLastOperation:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeIntervalSinceLastOperation;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
