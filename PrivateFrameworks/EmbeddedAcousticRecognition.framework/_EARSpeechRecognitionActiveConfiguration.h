
@interface _EARSpeechRecognitionActiveConfiguration : NSObject <NSCopying> {
    NSSet * _aneContextFilter;
    NSSet * _bluetoothDeviceIdFilter;
    NSSet * _cpuContextFilter;
    NSSet * _deviceIdFilter;
    NSSet * _farFieldFilter;
    NSSet * _gpuContextFilter;
    NSSet * _samplingRateFilter;
    NSSet * _taskTypeFilter;
}

@property (nonatomic, copy) NSSet *aneContextFilter;
@property (nonatomic, copy) NSSet *bluetoothDeviceIdFilter;
@property (nonatomic, copy) NSSet *cpuContextFilter;
@property (nonatomic, copy) NSSet *deviceIdFilter;
@property (nonatomic, copy) NSSet *farFieldFilter;
@property (nonatomic, copy) NSSet *gpuContextFilter;
@property (nonatomic, copy) NSSet *samplingRateFilter;
@property (nonatomic, copy) NSSet *taskTypeFilter;

+ (id)activeConfigurationForEverything;
+ (id)activeConfigurationForNothing;

- (void).cxx_destruct;
- (id)_initWithActiveConfiguration:(const void*)arg1;
- (id)aneContextFilter;
- (id)bluetoothDeviceIdFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cpuContextFilter;
- (id)description;
- (id)deviceIdFilter;
- (id)farFieldFilter;
- (id)gpuContextFilter;
- (id)samplingRateFilter;
- (void)setAneContextFilter:(id)arg1;
- (void)setBluetoothDeviceIdFilter:(id)arg1;
- (void)setCpuContextFilter:(id)arg1;
- (void)setDeviceIdFilter:(id)arg1;
- (void)setFarFieldFilter:(id)arg1;
- (void)setGpuContextFilter:(id)arg1;
- (void)setSamplingRateFilter:(id)arg1;
- (void)setTaskTypeFilter:(id)arg1;
- (struct SpeechRecognizerActiveConfiguration { struct optional<std::set<unsigned int>> { union { BOOL x_1_2_1; struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { void *x_1_4_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_6_1; } x_2_5_1; } x_1_4_2; struct __compressed_pair<unsigned long, std::less<unsigned int>> { unsigned long long x_3_5_1; } x_1_4_3; } x_2_3_1; } x_1_2_2; } x_1_1_1; bool x_1_1_2; } x1; struct optional<std::set<std::string>> { union { BOOL x_1_2_1; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *x_1_4_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_6_1; } x_2_5_1; } x_1_4_2; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long x_3_5_1; } x_1_4_3; } x_2_3_1; } x_1_2_2; } x_2_1_1; bool x_2_1_2; } x2; })speechRecognizerActiveConfiguration;
- (id)taskTypeFilter;

@end
