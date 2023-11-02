
@interface AMSUIWebOverrideTreatmentsAction : AMSUIWebAction {
    NSDictionary * _treatmentOverrides;
}

@property (nonatomic, retain) NSDictionary *treatmentOverrides;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setTreatmentOverrides:(id)arg1;
- (id)treatmentOverrides;

@end
