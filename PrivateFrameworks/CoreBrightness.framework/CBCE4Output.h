
@interface CBCE4Output : NSObject <MLFeatureProvider> {
    MLMultiArray * _CBCE4_Q0_output;
    MLMultiArray * _CBCE4_Q1_output;
    MLMultiArray * _CBCE4_Q2_output;
    MLMultiArray * _CBCE4_Q3_output;
    MLMultiArray * _CBCE4_Q4_output;
    MLMultiArray * _strength_output;
    MLMultiArray * _uncertainty;
}

@property (nonatomic, retain) MLMultiArray *CBCE4_Q0_output;
@property (nonatomic, retain) MLMultiArray *CBCE4_Q1_output;
@property (nonatomic, retain) MLMultiArray *CBCE4_Q2_output;
@property (nonatomic, retain) MLMultiArray *CBCE4_Q3_output;
@property (nonatomic, retain) MLMultiArray *CBCE4_Q4_output;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *strength_output;
@property (nonatomic, retain) MLMultiArray *uncertainty;

- (void).cxx_destruct;
- (id)CBCE4_Q0_output;
- (id)CBCE4_Q1_output;
- (id)CBCE4_Q2_output;
- (id)CBCE4_Q3_output;
- (id)CBCE4_Q4_output;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithCBCE4_Q0_output:(id)arg1 CBCE4_Q1_output:(id)arg2 CBCE4_Q2_output:(id)arg3 CBCE4_Q3_output:(id)arg4 CBCE4_Q4_output:(id)arg5 strength_output:(id)arg6 uncertainty:(id)arg7;
- (void)setCBCE4_Q0_output:(id)arg1;
- (void)setCBCE4_Q1_output:(id)arg1;
- (void)setCBCE4_Q2_output:(id)arg1;
- (void)setCBCE4_Q3_output:(id)arg1;
- (void)setCBCE4_Q4_output:(id)arg1;
- (void)setStrength_output:(id)arg1;
- (void)setUncertainty:(id)arg1;
- (id)strength_output;
- (id)uncertainty;

@end
