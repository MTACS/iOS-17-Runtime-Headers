
@interface HDCodableMedicationDoseEvent : PBCodable <HDDecoding, NSCopying> {
    double  _doseQuantity;
    struct { 
        unsigned int doseQuantity : 1; 
        unsigned int logOrigin : 1; 
        unsigned int scheduledDate : 1; 
        unsigned int scheduledDoseQuantity : 1; 
        unsigned int status : 1; 
    }  _has;
    long long  _logOrigin;
    NSString * _medicationIdentifier;
    NSData * _medicationUuid;
    HDCodableSample * _sample;
    NSString * _scheduleItemIdentifier;
    double  _scheduledDate;
    double  _scheduledDoseQuantity;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doseQuantity;
@property (nonatomic) bool hasDoseQuantity;
@property (nonatomic) bool hasLogOrigin;
@property (nonatomic, readonly) bool hasMedicationIdentifier;
@property (nonatomic, readonly) bool hasMedicationUuid;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic, readonly) bool hasScheduleItemIdentifier;
@property (nonatomic) bool hasScheduledDate;
@property (nonatomic) bool hasScheduledDoseQuantity;
@property (nonatomic) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long logOrigin;
@property (nonatomic, retain) NSString *medicationIdentifier;
@property (nonatomic, retain) NSData *medicationUuid;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic, retain) NSString *scheduleItemIdentifier;
@property (nonatomic) double scheduledDate;
@property (nonatomic) double scheduledDoseQuantity;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doseQuantity;
- (bool)hasDoseQuantity;
- (bool)hasLogOrigin;
- (bool)hasMedicationIdentifier;
- (bool)hasMedicationUuid;
- (bool)hasSample;
- (bool)hasScheduleItemIdentifier;
- (bool)hasScheduledDate;
- (bool)hasScheduledDoseQuantity;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)logOrigin;
- (id)medicationIdentifier;
- (id)medicationUuid;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (id)scheduleItemIdentifier;
- (double)scheduledDate;
- (double)scheduledDoseQuantity;
- (void)setDoseQuantity:(double)arg1;
- (void)setHasDoseQuantity:(bool)arg1;
- (void)setHasLogOrigin:(bool)arg1;
- (void)setHasScheduledDate:(bool)arg1;
- (void)setHasScheduledDoseQuantity:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setLogOrigin:(long long)arg1;
- (void)setMedicationIdentifier:(id)arg1;
- (void)setMedicationUuid:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setScheduleItemIdentifier:(id)arg1;
- (void)setScheduledDate:(double)arg1;
- (void)setScheduledDoseQuantity:(double)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (void)writeTo:(id)arg1;

@end
