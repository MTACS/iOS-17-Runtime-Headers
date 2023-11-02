
@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying> {
    NSMutableArray * _medicationDoseEvents;
}

@property (nonatomic, retain) NSMutableArray *medicationDoseEvents;

+ (Class)medicationDoseEventType;

- (void).cxx_destruct;
- (void)addMedicationDoseEvent:(id)arg1;
- (void)clearMedicationDoseEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)decodedObjects;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicationDoseEventAtIndex:(unsigned long long)arg1;
- (id)medicationDoseEvents;
- (unsigned long long)medicationDoseEventsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMedicationDoseEvents:(id)arg1;
- (bool)unitTest_isEquivalentToGeneratedObjectCollection:(id)arg1;
- (void)writeTo:(id)arg1;

@end
