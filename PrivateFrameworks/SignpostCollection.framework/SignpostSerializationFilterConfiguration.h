
@interface SignpostSerializationFilterConfiguration : NSObject {
    SignpostSupportPIDFilter * _pidFilter;
    SignpostSupportExactProcessNameFilter * _processNameFilter;
    SignpostSupportSubsystemCategoryFilter * _subsystemCategoryFilter;
    SignpostSupportUniquePIDFilter * _uniquePidFilter;
}

@property (nonatomic, retain) SignpostSupportPIDFilter *pidFilter;
@property (nonatomic, retain) SignpostSupportExactProcessNameFilter *processNameFilter;
@property (nonatomic, retain) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter;
@property (nonatomic, retain) SignpostSupportUniquePIDFilter *uniquePidFilter;

- (void).cxx_destruct;
- (id)pidFilter;
- (id)processNameFilter;
- (void)setPidFilter:(id)arg1;
- (void)setProcessNameFilter:(id)arg1;
- (void)setSubsystemCategoryFilter:(id)arg1;
- (void)setUniquePidFilter:(id)arg1;
- (id)subsystemCategoryFilter;
- (id)uniquePidFilter;

@end
