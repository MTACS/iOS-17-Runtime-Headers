
@interface DTGPUAPSDataContainer : NSObject <NSSecureCoding> {
    NSMutableDictionary * _config;
    NSMutableArray * _customFiles;
    NSMutableDictionary * _data;
    NSMutableArray * _rdeFiles;
    NSMutableArray * _uscFiles;
}

@property (nonatomic, readonly) NSDictionary *config;
@property (nonatomic, readonly) unsigned long long numRDEs;
@property (nonatomic, readonly) unsigned long long numUSCs;

+ (id)fromData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addConfigEntry:(id)arg1 value:(id)arg2;
- (void)addCustomData:(id)arg1 data:(id)arg2;
- (void)addDataForRDESourceIndex:(unsigned int)arg1 bufferIndex:(unsigned int)arg2 data:(id)arg3;
- (void)addDataForUSCAtIndex:(unsigned int)arg1 data:(id)arg2;
- (id)config;
- (id)encode;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateRDEData:(id /* block */)arg1;
- (void)enumerateUSCData:(id /* block */)arg1;
- (id)getData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1 baseFolder:(id)arg2;
- (unsigned long long)numBuffersAtRDEIndex:(unsigned long long)arg1;
- (unsigned long long)numRDEs;
- (unsigned long long)numUSCs;

@end
