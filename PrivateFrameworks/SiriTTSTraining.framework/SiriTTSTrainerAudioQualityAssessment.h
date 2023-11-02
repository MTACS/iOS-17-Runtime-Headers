
@interface SiriTTSTrainerAudioQualityAssessment : NSObject {
    struct map<AudioQualityMetric, double, std::less<AudioQualityMetric>, std::allocator<std::pair<const AudioQualityMetric, double>>> { 
        struct __tree<std::__value_type<AudioQualityMetric, double>, std::__map_value_compare<AudioQualityMetric, std::__value_type<AudioQualityMetric, double>, std::less<AudioQualityMetric>>, std::allocator<std::__value_type<AudioQualityMetric, double>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<AudioQualityMetric, double>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<AudioQualityMetric, std::__value_type<AudioQualityMetric, double>, std::less<AudioQualityMetric>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _metrics;
}

@property (nonatomic, readonly) float SNR;
@property (nonatomic, readonly) float SNR_end;
@property (nonatomic, readonly) float SNR_threshold;
@property (nonatomic, readonly) float SNR_unnormalized;
@property (nonatomic, readonly) float SNR_unnormalized_end;
@property (nonatomic, readonly) float SPL;
@property (nonatomic, readonly) float SPL_end;
@property (nonatomic, readonly) float SPL_threshold;
@property (nonatomic, readonly) float SPL_unnormalized;
@property (nonatomic, readonly) float SPL_unnormalized_end;

+ (float)DO_NOT_NORMALIZE;
+ (float)default_target_db;
+ (float)default_threshold_db;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)SNR;
- (float)SNR_end;
- (float)SNR_threshold;
- (float)SNR_unnormalized;
- (float)SNR_unnormalized_end;
- (float)SPL;
- (float)SPL_end;
- (float)SPL_threshold;
- (float)SPL_unnormalized;
- (float)SPL_unnormalized_end;
- (id)initWithMetrics:(void*)arg1 unnormalized:(void*)arg2;

@end
