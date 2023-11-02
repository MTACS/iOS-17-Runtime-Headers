
@interface _PSFTZKWTrialData : NSObject <NSCopying> {
    TRIExperimentIdentifiers * _experimentIdentifiers;
    long long  _fallbackInteractionsDefaultConfidenceCategory;
    bool  _fallbackInteractionsIsEnabled;
    long long  _fallbackInteractionsModelType;
    long long  _primaryInteractionsDefaultConfidenceCategory;
    bool  _primaryInteractionsIsEnabled;
    long long  _primaryInteractionsModelType;
    TRIRolloutIdentifiers * _rolloutIdentifiers;
    long long  _structuredCalendarDefaultConfidenceCategory;
    bool  _structuredCalendarIsEnabled;
    long long  _unstructuredCalendarDefaultConfidenceCategory;
    bool  _unstructuredCalendarIsEnabled;
    long long  _unstructuredRemindersDefaultConfidenceCategory;
    bool  _unstructuredRemindersIsEnabled;
}

@property (nonatomic, copy) TRIExperimentIdentifiers *experimentIdentifiers;
@property (nonatomic) long long fallbackInteractionsDefaultConfidenceCategory;
@property (nonatomic) bool fallbackInteractionsIsEnabled;
@property (nonatomic) long long fallbackInteractionsModelType;
@property (nonatomic) long long primaryInteractionsDefaultConfidenceCategory;
@property (nonatomic) bool primaryInteractionsIsEnabled;
@property (nonatomic) long long primaryInteractionsModelType;
@property (nonatomic, copy) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (nonatomic) long long structuredCalendarDefaultConfidenceCategory;
@property (nonatomic) bool structuredCalendarIsEnabled;
@property (nonatomic) long long unstructuredCalendarDefaultConfidenceCategory;
@property (nonatomic) bool unstructuredCalendarIsEnabled;
@property (nonatomic) long long unstructuredRemindersDefaultConfidenceCategory;
@property (nonatomic) bool unstructuredRemindersIsEnabled;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)experimentIdentifiers;
- (long long)fallbackInteractionsDefaultConfidenceCategory;
- (bool)fallbackInteractionsIsEnabled;
- (long long)fallbackInteractionsModelType;
- (long long)primaryInteractionsDefaultConfidenceCategory;
- (bool)primaryInteractionsIsEnabled;
- (long long)primaryInteractionsModelType;
- (id)rolloutIdentifiers;
- (void)setExperimentIdentifiers:(id)arg1;
- (void)setFallbackInteractionsDefaultConfidenceCategory:(long long)arg1;
- (void)setFallbackInteractionsIsEnabled:(bool)arg1;
- (void)setFallbackInteractionsModelType:(long long)arg1;
- (void)setPrimaryInteractionsDefaultConfidenceCategory:(long long)arg1;
- (void)setPrimaryInteractionsIsEnabled:(bool)arg1;
- (void)setPrimaryInteractionsModelType:(long long)arg1;
- (void)setRolloutIdentifiers:(id)arg1;
- (void)setStructuredCalendarDefaultConfidenceCategory:(long long)arg1;
- (void)setStructuredCalendarIsEnabled:(bool)arg1;
- (void)setUnstructuredCalendarDefaultConfidenceCategory:(long long)arg1;
- (void)setUnstructuredCalendarIsEnabled:(bool)arg1;
- (void)setUnstructuredRemindersDefaultConfidenceCategory:(long long)arg1;
- (void)setUnstructuredRemindersIsEnabled:(bool)arg1;
- (long long)structuredCalendarDefaultConfidenceCategory;
- (bool)structuredCalendarIsEnabled;
- (long long)unstructuredCalendarDefaultConfidenceCategory;
- (bool)unstructuredCalendarIsEnabled;
- (long long)unstructuredRemindersDefaultConfidenceCategory;
- (bool)unstructuredRemindersIsEnabled;

@end
