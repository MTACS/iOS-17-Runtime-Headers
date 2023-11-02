
@interface HFSymptomStatusItem : HFStatusItem {
    HMSymptom * _symptom;
}

@property (nonatomic, readonly) HMSymptom *symptom;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)symptom;

@end
