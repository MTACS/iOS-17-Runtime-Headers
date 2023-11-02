
@interface MAIHistoricalAnalyzer : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { 
        struct __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { 
            struct ngt_HistoricalAnalyzer {} *__value_; 
        } __ptr_; 
    }  _historicalAnalyzer;
    struct optional<unsigned int> { 
        union { 
            BOOL __null_state_; 
            unsigned int __val_; 
        } ; 
        bool __engaged_; 
    }  _julianDayOfLastInput;
    struct unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> { 
        struct __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::default_delete<HealthAlgorithms::PhaseCondenser>> { 
            struct PhaseCondenser {} *__value_; 
        } __ptr_; 
    }  _phaseCondenser;
    NSMutableArray * _watchIdentifiers;
}

@property (nonatomic, retain) NSMutableArray *watchIdentifiers;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct MAIHistoricalAnalyzerOutput { id x1; id x2; })analyze;
- (void)appendDay:(id)arg1;
- (void)beginPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (void)endPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)init;
- (id)phaseStringFromNumber:(id)arg1;
- (void)setWatchIdentifiers:(id)arg1;
- (id)watchIdentifiers;
- (unsigned char)watchNumericIdentifierFromString:(id)arg1;

@end
