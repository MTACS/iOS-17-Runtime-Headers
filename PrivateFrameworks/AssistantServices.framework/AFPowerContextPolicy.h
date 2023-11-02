
@interface AFPowerContextPolicy : NSObject <NSCopying, NSSecureCoding> {
    struct AFPowerContext { 
        unsigned long long cpuContext; 
        unsigned long long aneContext; 
        unsigned long long gpuContext; 
    }  _asrAssistantPolicy;
    struct AFPowerContext { 
        unsigned long long cpuContext; 
        unsigned long long aneContext; 
        unsigned long long gpuContext; 
    }  _asrDictationPolicy;
    unsigned long long  _platformContext;
    struct AFPowerContext { 
        unsigned long long cpuContext; 
        unsigned long long aneContext; 
        unsigned long long gpuContext; 
    }  _siriUIPolicy;
    unsigned long long  _thermalMitigationLevel;
    struct AFPowerContext { 
        unsigned long long cpuContext; 
        unsigned long long aneContext; 
        unsigned long long gpuContext; 
    }  _ttsPolicy;
}

@property (nonatomic, readonly) struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; } asrAssistantPolicy;
@property (nonatomic, readonly) struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; } asrDictationPolicy;
@property (nonatomic, readonly) unsigned long long platformContext;
@property (nonatomic, readonly) struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; } siriUIPolicy;
@property (nonatomic, readonly) unsigned long long thermalMitigationLevel;
@property (nonatomic, readonly) struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; } ttsPolicy;

+ (bool)supportsSecureCoding;

- (struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })asrAssistantPolicy;
- (struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })asrDictationPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)encodePolicy;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 asrDictationPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 ttsPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 asrDictationPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 ttsPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 platformContext:(unsigned long long)arg4;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 asrDictationPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 ttsPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 siriUIPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 asrDictationPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 ttsPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 siriUIPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 thermalMitigationLevel:(unsigned long long)arg5;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 asrDictationPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 ttsPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 siriUIPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 thermalMitigationLevel:(unsigned long long)arg5 platformContext:(unsigned long long)arg6;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 asrDictationPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 ttsPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 thermalMitigationLevel:(unsigned long long)arg4;
- (id)initWithAsrAssistantPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 asrDictationPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 ttsPolicy:(struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 thermalMitigationLevel:(unsigned long long)arg4 platformContext:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedPolicy:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)platformContext;
- (struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })siriUIPolicy;
- (unsigned long long)thermalMitigationLevel;
- (struct AFPowerContext { unsigned long long x1; unsigned long long x2; unsigned long long x3; })ttsPolicy;

@end
