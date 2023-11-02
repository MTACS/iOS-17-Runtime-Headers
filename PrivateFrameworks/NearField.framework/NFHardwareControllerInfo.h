
@interface NFHardwareControllerInfo : NSObject <NSSecureCoding> {
    unsigned long long  _ROMVersion;
    unsigned long long  _firmwareRevision;
    unsigned long long  _firmwareVersion;
    bool  _hasAntenna;
    bool  _hasCarKeySupport;
    bool  _hasHLMSupport;
    bool  _hasIcfResistor;
    bool  _hasLPEMSupport;
    bool  _hasMFW;
    bool  _hasReaderModeSupport;
    unsigned long long  _middlewareVersion;
    bool  _poweredRunDuringSleep;
    unsigned long long  _siliconName;
    unsigned long long  _siliconVersion;
}

@property (nonatomic, readonly) unsigned long long ROMVersion;
@property (nonatomic, readonly) unsigned long long firmwareRevision;
@property (nonatomic, readonly) unsigned long long firmwareVersion;
@property (nonatomic, readonly) bool hasAntenna;
@property (nonatomic, readonly) bool hasCarKeySupport;
@property (nonatomic, readonly) bool hasHLMSupport;
@property (nonatomic, readonly) bool hasIcfResistor;
@property (nonatomic, readonly) bool hasLPEMSupport;
@property (nonatomic, readonly) bool hasMFW;
@property (nonatomic, readonly) bool hasReaderModeSupport;
@property (nonatomic, readonly) unsigned long long middlewareVersion;
@property (nonatomic, readonly) bool poweredRunDuringSleep;
@property (nonatomic, readonly) unsigned long long siliconName;
@property (nonatomic, readonly) unsigned long long siliconVersion;

+ (bool)supportsSecureCoding;

- (unsigned long long)ROMVersion;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)firmwareRevision;
- (unsigned long long)firmwareVersion;
- (bool)hasAntenna;
- (bool)hasCarKeySupport;
- (bool)hasHLMSupport;
- (bool)hasIcfResistor;
- (bool)hasLPEMSupport;
- (bool)hasMFW;
- (bool)hasReaderModeSupport;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)middlewareVersion;
- (bool)poweredRunDuringSleep;
- (unsigned long long)siliconName;
- (unsigned long long)siliconVersion;

@end
