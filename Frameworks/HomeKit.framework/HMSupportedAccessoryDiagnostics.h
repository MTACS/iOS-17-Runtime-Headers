
@interface HMSupportedAccessoryDiagnostics : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _supportedAudio;
    long long  _supportedFormat;
    unsigned long long  _supportedOptions;
    unsigned long long  _supportedTypes;
}

@property (nonatomic, readonly) unsigned long long supportedAudio;
@property (nonatomic, readonly) long long supportedFormat;
@property (nonatomic, readonly) unsigned long long supportedOptions;
@property (nonatomic, readonly) unsigned long long supportedTypes;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedTypes:(unsigned long long)arg1 format:(long long)arg2 audio:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)supportedAudio;
- (long long)supportedFormat;
- (unsigned long long)supportedOptions;
- (unsigned long long)supportedTypes;

@end
