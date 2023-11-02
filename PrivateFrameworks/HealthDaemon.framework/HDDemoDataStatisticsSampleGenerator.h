
@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {
    struct normal_distribution<double> { 
        struct param_type { 
            double __mean_; 
            double __stddev_; 
        } __p_; 
        double __v_; 
        bool __v_hot_; 
    }  _distribution;
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { 
        unsigned int __x_; 
    }  _generator;
    NSArray * _pseudoRandomDoubles;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_pseudoRandomDoubles;
- (double)computeNoiseFromTime:(double)arg1 stdDev:(double)arg2;
- (double)computeStatisticalTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)pseudoRandomDoubleFromTime:(double)arg1;
- (double)randomDoubleFromGenerator;
- (double)randomSampleFromNormalDistributionWithMean:(double)arg1 stdDev:(double)arg2;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
