
@interface HKElectrocardiogram : HKSample <_HKBinarySample> {
    HKQuantity * _averageHeartRate;
    unsigned long long  _privateClassification;
    struct Electrocardiogram { 
        int (**_vptr$Base)(); 
        double _frequency; 
        struct PtrVector<binarysample::ElectrocardiogramLead> { 
            struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { 
                    void *__value_; 
                } __end_cap_; 
            } _v; 
        } _leads; 
        struct { 
            unsigned int frequency : 1; 
        } _has; 
    }  _reading;
    long long  _symptomsStatus;
}

@property (getter=_algorithmVersion, nonatomic, readonly) NSNumber *algorithmVersion;
@property (nonatomic, readonly, copy) HKQuantity *averageHeartRate;
@property (nonatomic, readonly) long long classification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *hk_BPMTextColor;
@property (nonatomic, readonly) UIColor *hk_cardBackgroundColor;
@property (nonatomic, readonly) UIColor *hk_cardHeaderColor;
@property (nonatomic, readonly) UIColor *hk_classificationTextColor;
@property (nonatomic, readonly) bool hk_hasPositiveSymptoms;
@property (nonatomic, readonly) bool hk_isBPMTextBold;
@property (nonatomic, readonly) bool hk_isClassificationSupported;
@property (nonatomic, readonly) bool hk_isPossibleAtrialFibrillation;
@property (nonatomic, readonly) bool hk_isSymptomsNoSymptoms;
@property (nonatomic, readonly) bool hk_isSymptomsNotSet;
@property (nonatomic, readonly) NSString *hk_localizedAverageBPM;
@property (nonatomic, readonly) NSString *hk_localizedDuration;
@property (nonatomic, readonly) NSString *hk_localizedNumSymptoms;
@property (nonatomic, readonly) NSString *hk_localizedUppercaseNumSymptoms;
@property (nonatomic, readonly) UIColor *hk_numSymptomsTextColor;
@property (nonatomic, readonly) NSString *hk_timeStampCompositingFilter;
@property (nonatomic, readonly) UIColor *hk_timeStampTextColor;
@property (nonatomic, readonly, copy) NSArray *leadNames;
@property (getter=_localizedSymptoms, nonatomic, readonly) NSArray *localizedSymptoms;
@property (nonatomic, readonly) long long numberOfVoltageMeasurements;
@property (nonatomic, readonly) unsigned long long privateClassification;
@property (getter=privateSymptoms, nonatomic, readonly) unsigned long long privateSymptoms;
@property (nonatomic, readonly, copy) HKQuantity *samplingFrequency;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long symptomsStatus;
@property (nonatomic, readonly) NSString *wd_commaSeparatedData;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3;
+ (bool)_isConcreteObjectClass;
+ (id)_localizedClassification:(unsigned long long)arg1 withActiveAlgorithmVersion:(long long)arg2;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_algorithmVersion;
- (unsigned long long)_classification;
- (void)_enumerateDataForLead:(long long)arg1 block:(id /* block */)arg2;
- (id)_localizedClassificationWithActiveAlgorithmVersion:(long long)arg1;
- (id)_localizedSymptoms;
- (void)_setAverageHeartRate:(id)arg1;
- (void)_setPayload:(id)arg1;
- (void)_setPrivateClassification:(unsigned long long)arg1;
- (void)_setSymptomsStatus:(long long)arg1;
- (unsigned long long)_symptoms;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)averageHeartRate;
- (long long)classification;
- (void)copyMeasurementFlagsForLead:(long long)arg1 count:(unsigned long long)arg2 target:(char *)arg3;
- (void)copyMeasurementValuesForLead:(long long)arg1 count:(unsigned long long)arg2 target:(float*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDataForLead:(long long)arg1 block:(id /* block */)arg2;
- (id)frequency;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)leadNames;
- (long long)numberOfValues;
- (long long)numberOfVoltageMeasurements;
- (id)payload;
- (bool)prepareForSaving:(id*)arg1;
- (unsigned long long)privateClassification;
- (unsigned long long)privateSymptoms;
- (id)samplingFrequency;
- (void)setReading:(struct Electrocardiogram { int (**x1)(); double x2; struct PtrVector<binarysample::ElectrocardiogramLead> { struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x_1_2_1; void *x_1_2_2; struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct { unsigned int x_4_1_1 : 1; } x4; })arg1;
- (long long)symptoms;
- (long long)symptomsStatus;
- (id)voltageMeasurementEnumerator;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (id)wd_commaSeparatedData;
- (id)wd_commaSeparatedHeaderWithActiveAlgorithmVersion:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)createWithCodableECG:(id)arg1;
+ (id)hk_abnormalBPMTextColor;
+ (id)hk_abnormalCardHeaderColor;
+ (id)hk_abnormalClassificationTextColor;
+ (id)hk_abnormalTimeStampCompositingFilter;
+ (id)hk_abnormalTimeStampTextColor;
+ (id)hk_defaultBPMTextColor;
+ (id)hk_defaultCardBackgroundColor;
+ (id)hk_defaultCardHeaderColor;
+ (id)hk_defaultClassificationTextColor;
+ (id)hk_defaultNumSymptomsTextColor;
+ (id)hk_defaultTimeStampCompositingFilter;
+ (id)hk_defaultTimeStampTextColor;
+ (id)hk_localizedAverageBPM:(id)arg1;
+ (id)hk_onboardingCardBackgroundColor;
+ (id)hk_onboardingCardHeaderColor;
+ (id)hk_positiveNumSymptomsTextColor;

- (bool)_hk_classificationHasAbnormalBPMFontColorAndStyle;
- (bool)_hk_classificationHasAbnormalHeaderColorAndStyle;
- (id)_hk_waveformPathsWithNumberOfValues:(long long)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(bool)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;
- (id)_hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(bool)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;
- (id)codableECG;
- (id)hk_BPMTextColor;
- (id)hk_cardBackgroundColor;
- (id)hk_cardHeaderColor;
- (id)hk_classificationTextColor;
- (bool)hk_hasPositiveSymptoms;
- (bool)hk_isBPMTextBold;
- (bool)hk_isClassificationSupported;
- (bool)hk_isPossibleAtrialFibrillation;
- (bool)hk_isSymptomsNoSymptoms;
- (bool)hk_isSymptomsNotSet;
- (id)hk_localizedAverageBPM;
- (id)hk_localizedDuration;
- (id)hk_localizedNumSymptoms;
- (id)hk_localizedUppercaseNumSymptoms;
- (id)hk_numSymptomsTextColor;
- (id)hk_timeStampCompositingFilter;
- (id)hk_timeStampTextColor;
- (id)hk_waveformPathsWithNumberOfValues:(long long)arg1 fitToWidth:(double)arg2 pointsPerMillivolt:(double)arg3 minimumValueInMillivolts:(float)arg4 maximumValueInMillivolts:(float)arg5;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 minimumValueInMillivolts:(float)arg3 maximumValueInMillivolts:(float)arg4;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4;
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4 minimumValueInMillivolts:(float)arg5 maximumValueInMillivolts:(float)arg6;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

- (id)hrui_classificationShortBodyTextWithActiveAlgorithmVersion:(long long)arg1 isSharedData:(bool)arg2;

@end
