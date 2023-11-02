
@interface JETreatmentProfile : NSObject {
    NSArray * _treatments;
}

+ (id)treatmentProfileWithConfiguration:(id)arg1;
+ (id)treatmentProfileWithConfiguration:(id)arg1 topic:(id)arg2;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)arg1 topic:(id)arg2;
- (id)performTreatments:(id)arg1;

@end
