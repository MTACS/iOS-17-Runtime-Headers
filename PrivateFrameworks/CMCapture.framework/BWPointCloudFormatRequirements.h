
@interface BWPointCloudFormatRequirements : BWFormatRequirements <NSSecureCoding> {
    unsigned long long  _dataBufferSize;
    unsigned long long  _maxPoints;
    bool  _memoryPoolUseAllowed;
    NSArray * _supportedDataFormats;
}

@property (nonatomic, readonly) NSDictionary *dataBufferAttributes;
@property (nonatomic) unsigned long long dataBufferSize;
@property (nonatomic) unsigned long long maxPoints;
@property (nonatomic) bool memoryPoolUseAllowed;
@property (nonatomic, copy) NSArray *supportedDataFormats;

+ (bool)supportsSecureCoding;

- (id)dataBufferAttributes;
- (unsigned long long)dataBufferSize;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)formatClass;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxPoints;
- (unsigned int)mediaType;
- (bool)memoryPoolUseAllowed;
- (void)setDataBufferSize:(unsigned long long)arg1;
- (void)setMaxPoints:(unsigned long long)arg1;
- (void)setMemoryPoolUseAllowed:(bool)arg1;
- (void)setSupportedDataFormats:(id)arg1;
- (id)supportedDataFormats;

@end
