
@interface HKElectrocardiogramBuilder : NSObject {
    HKQuantity * _averageHeartRate;
    unsigned long long  _classification;
    HKQuantity * _frequency;
    struct map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::less<binarysample::ElectrocardiogramLead_Name>, std::allocator<std::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> { 
        struct __tree<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>>, std::allocator<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::less<binarysample::ElectrocardiogramLead_Name>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _leads;
    NSDate * _startDate;
}

@property (nonatomic, copy) HKQuantity *frequency;
@property (nonatomic, copy) NSDate *startDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAverageHeartRate:(id)arg1;
- (void)addClassification:(unsigned long long)arg1;
- (void)addValue:(float)arg1 lead:(long long)arg2;
- (id)finishWithDevice:(id)arg1 metadata:(id)arg2;
- (id)frequency;
- (id)initWithStartDate:(id)arg1 frequency:(id)arg2;
- (void)setFrequency:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)builderFromDemoDataFile:(id)arg1 startDate:(id)arg2;

@end
