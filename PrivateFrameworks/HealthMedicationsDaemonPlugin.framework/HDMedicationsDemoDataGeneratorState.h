
@interface HDMedicationsDemoDataGeneratorState : NSObject {
    bool  _didSaveIntialData;
    bool  _didSetupOntologyData;
    bool  _hasScheduledMedications;
    NSDate * _latestLogDate;
    NSDate * _latestTakenLogDate;
}

@property (nonatomic) bool didSaveIntialData;
@property (nonatomic) bool didSetupOntologyData;
@property (nonatomic) bool hasScheduledMedications;
@property (nonatomic, retain) NSDate *latestLogDate;
@property (nonatomic, retain) NSDate *latestTakenLogDate;

- (void).cxx_destruct;
- (id)dictionary;
- (bool)didSaveIntialData;
- (bool)didSetupOntologyData;
- (bool)hasScheduledMedications;
- (id)initWithDictionary:(id)arg1;
- (id)latestLogDate;
- (id)latestTakenLogDate;
- (void)setDidSaveIntialData:(bool)arg1;
- (void)setDidSetupOntologyData:(bool)arg1;
- (void)setHasScheduledMedications:(bool)arg1;
- (void)setLatestLogDate:(id)arg1;
- (void)setLatestTakenLogDate:(id)arg1;

@end
