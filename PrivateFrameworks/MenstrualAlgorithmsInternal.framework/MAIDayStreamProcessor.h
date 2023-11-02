
@interface MAIDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct unique_ptr<Nightingale::ngt_DayStreamProcessor, std::default_delete<Nightingale::ngt_DayStreamProcessor>> { 
        struct __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::default_delete<Nightingale::ngt_DayStreamProcessor>> { 
            struct ngt_DayStreamProcessor {} *__value_; 
        } __ptr_; 
    }  _dayStreamProcessor;
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
    NSNumber * _userAgeInYears;
    NSMutableArray * _watchIdentifiers;
}

@property (nonatomic, retain) NSNumber *userAgeInYears;
@property (nonatomic, retain) NSMutableArray *watchIdentifiers;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct MAIDayStreamProcessorOutput { id x1; id x2; id x3; })analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)arg1;
- (void)appendDay:(id)arg1;
- (void)beginPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (void)endPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)initWithConfig:(id)arg1;
- (void)setUserAgeInYears:(id)arg1;
- (void)setWatchIdentifiers:(id)arg1;
- (id)userAgeInYears;
- (id)watchIdentifiers;
- (unsigned char)watchNumericIdentifierFromString:(id)arg1;

@end
