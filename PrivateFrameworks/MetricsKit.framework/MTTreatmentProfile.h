
@interface MTTreatmentProfile : NSObject {
    NSArray * _treatments;
}

@property (nonatomic, retain) NSArray *treatments;

+ (id)treatmentProfileWithConfigData:(id)arg1;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)arg1;
- (id)performTreatments:(id)arg1;
- (void)setTreatments:(id)arg1;
- (id)treatments;

@end
