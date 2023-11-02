
@interface AVTCoreModelCategory : NSObject {
    AVTCoreModelPairing * _pairing;
    NSArray * _pickers;
    long long  _presetCategory;
    NSArray * _presets;
    NSDictionary * _tags;
}

@property (nonatomic, readonly, copy) AVTCoreModelPairing *pairing;
@property (nonatomic, readonly, copy) NSArray *pickers;
@property (nonatomic, readonly) long long presetCategory;
@property (nonatomic, readonly, copy) NSArray *presets;
@property (nonatomic, readonly, copy) NSDictionary *tags;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPresetCategory:(long long)arg1 presets:(id)arg2 tags:(id)arg3 rows:(id)arg4 pairing:(id)arg5;
- (id)pairing;
- (id)pickers;
- (long long)presetCategory;
- (id)presets;
- (id)tags;

@end
