
@interface DeviceTypeDeviceIdentity : NSObject {
    NSString * _device_class;
    bool  _device_supports_dcrt_oob;
    NSString * _hardware_model;
    bool  _has_baseband;
    bool  _has_internal_diagnostics;
    bool  _is_audio_accessory;
    bool  _is_dev_board;
    bool  _is_devfused_undemoted;
    bool  _is_fpga;
    bool  _is_internal_build;
    bool  _is_ipad;
    bool  _is_iphone;
    bool  _is_ipod;
    bool  _is_prodfused_demoted;
    NSString * _product_type;
    bool  _should_hactivate;
    NSString * _soc_generation;
}

@property (nonatomic, readonly, copy) NSString *device_class;
@property (nonatomic, readonly) bool device_supports_dcrt_oob;
@property (nonatomic, readonly, copy) NSString *hardware_model;
@property (nonatomic, readonly) bool has_baseband;
@property (nonatomic, readonly) bool has_internal_diagnostics;
@property (nonatomic, readonly) bool is_audio_accessory;
@property (nonatomic, readonly) bool is_dev_board;
@property (nonatomic, readonly) bool is_devfused_undemoted;
@property (nonatomic, readonly) bool is_fpga;
@property (nonatomic, readonly) bool is_internal_build;
@property (nonatomic, readonly) bool is_ipad;
@property (nonatomic, readonly) bool is_iphone;
@property (nonatomic, readonly) bool is_ipod;
@property (nonatomic, readonly) bool is_prodfused_demoted;
@property (nonatomic, readonly, copy) NSString *product_type;
@property (nonatomic, readonly) bool should_hactivate;
@property (nonatomic, readonly, copy) NSString *soc_generation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)copyBootArgs;
- (id)copyBootSessionUUID;
- (id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3;
- (id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2;
- (id)copyDeviceTreeString:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (id)device_class;
- (bool)device_supports_dcrt_oob;
- (id)hardware_model;
- (bool)has_baseband;
- (bool)has_internal_diagnostics;
- (id)init;
- (bool)is_audio_accessory;
- (bool)is_dev_board;
- (bool)is_devfused_undemoted;
- (bool)is_fpga;
- (bool)is_internal_build;
- (bool)is_ipad;
- (bool)is_iphone;
- (bool)is_ipod;
- (bool)is_prodfused_demoted;
- (id)product_type;
- (bool)runningInRAMDisk;
- (bool)should_hactivate;
- (id)soc_generation;

@end
