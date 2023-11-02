
@interface AVCAudioPowerSpectrumChannel : NSObject <NSSecureCoding> {
    NSMutableArray * _bins;
}

@property (nonatomic, readonly) NSArray *bins;

+ (bool)supportsSecureCoding;

- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x_1_1_1; float x_1_1_2; } x1; float x2; }*)arg1 binCount:(unsigned int)arg2;
- (id)bins;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
