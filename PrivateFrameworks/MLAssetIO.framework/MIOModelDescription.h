
@interface MIOModelDescription : NSObject <NSMutableCopying> {
    NSArray * _classLabels;
    struct ModelDescription { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArenaLite { 
            void *ptr_; 
        } _internal_metadata_; 
        struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } input_; 
        struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } output_; 
        struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } traininginput_; 
        struct ArenaStringPtr { 
            void *ptr_; 
        } predictedfeaturename_; 
        struct ArenaStringPtr { 
            void *ptr_; 
        } predictedprobabilitiesname_; 
        struct Metadata {} *metadata_; 
        int _cached_size_; 
    }  _modelDescriptionParams;
    NSDictionary * _parameterDescriptionsByKey;
    bool  _updatable;
}

@property (nonatomic, readonly, copy) NSArray *classLabels;
@property (nonatomic, readonly, copy) NSArray *inputDescriptions;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSArray *outputDescriptions;
@property (nonatomic, readonly, copy) NSDictionary *parameterDescriptionsByKey;
@property (nonatomic, readonly, copy) NSString *predictedFeatureName;
@property (nonatomic, readonly, copy) NSString *predictedProbabilitiesName;
@property (nonatomic, readonly, copy) NSArray *trainingInputDescriptions;
@property (nonatomic, readonly) bool updatable;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setShortDescription:(id)arg1 forInputFeatureWithName:(id)arg2;
- (void)_setShortDescription:(id)arg1 forOutputFeatureWithName:(id)arg2;
- (void)_setShortDescription:(id)arg1 forTrainingInputFeatureWithName:(id)arg2;
- (id)classLabels;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSpecification:(const void*)arg1 isUpdatable:(bool)arg2 modelParameters:(id)arg3 classLabels:(id)arg4;
- (id)inputDescriptions;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (const void*)modelDescriptionSpecification;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)outputDescriptions;
- (id)parameterDescriptionsByKey;
- (id)predictedFeatureName;
- (id)predictedProbabilitiesName;
- (void)setMetadata:(id)arg1;
- (id)trainingInputDescriptions;
- (bool)updatable;

@end
