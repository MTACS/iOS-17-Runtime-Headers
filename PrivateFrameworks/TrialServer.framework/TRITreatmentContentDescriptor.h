
@interface TRITreatmentContentDescriptor : NSObject <NSCopying> {
    TRIAppContainer * _container;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) TRIAppContainer *container;
@property (nonatomic, readonly) NSString *treatmentId;

+ (id)descriptorWithTreatmentId:(id)arg1 container:(id)arg2;

- (void).cxx_destruct;
- (id)container;
- (id)copyWithReplacementContainer:(id)arg1;
- (id)copyWithReplacementTreatmentId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTreatmentId:(id)arg1 container:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescriptor:(id)arg1;
- (id)treatmentId;

@end
