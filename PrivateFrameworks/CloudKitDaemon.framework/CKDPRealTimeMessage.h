
@interface CKDPRealTimeMessage : PBCodable <NSCopying> {
    NSMutableArray * _associatedMergeableDeltas;
    NSMutableArray * _deleteRecordids;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSMutableArray * _saveRecords;
    int  _version;
}

@property (nonatomic, retain) NSMutableArray *associatedMergeableDeltas;
@property (nonatomic, retain) NSMutableArray *deleteRecordids;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *saveRecords;
@property (nonatomic) int version;

+ (Class)associatedMergeableDeltasType;
+ (Class)deleteRecordidsType;
+ (Class)saveRecordsType;

- (void).cxx_destruct;
- (void)addAssociatedMergeableDeltas:(id)arg1;
- (void)addDeleteRecordids:(id)arg1;
- (void)addSaveRecords:(id)arg1;
- (id)associatedMergeableDeltas;
- (id)associatedMergeableDeltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedMergeableDeltasCount;
- (void)clearAssociatedMergeableDeltas;
- (void)clearDeleteRecordids;
- (void)clearSaveRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteRecordids;
- (id)deleteRecordidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)deleteRecordidsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)saveRecords;
- (id)saveRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)saveRecordsCount;
- (void)setAssociatedMergeableDeltas:(id)arg1;
- (void)setDeleteRecordids:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setSaveRecords:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;
- (void)writeTo:(id)arg1;

@end
