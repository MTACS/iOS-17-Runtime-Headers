
@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying> {
    HDCodableMedicalIDData * _medicalIDData;
    NSMutableArray * _medicalIDLogs;
}

@property (nonatomic, readonly) bool hasMedicalIDData;
@property (nonatomic, retain) HDCodableMedicalIDData *medicalIDData;
@property (nonatomic, retain) NSMutableArray *medicalIDLogs;

+ (Class)medicalIDLogsType;

- (void).cxx_destruct;
- (void)addMedicalIDLogs:(id)arg1;
- (void)clearMedicalIDLogs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMedicalIDData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalIDData;
- (id)medicalIDLogs;
- (id)medicalIDLogsAtIndex:(unsigned long long)arg1;
- (unsigned long long)medicalIDLogsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setMedicalIDLogs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
