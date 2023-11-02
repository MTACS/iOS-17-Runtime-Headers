
@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSNumber * _fragmentLength;
}

@property (nonatomic, readonly, copy) NSNumber *fragmentLength;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentLength;
- (id)initWithCoder:(id)arg1;
- (id)initWithFragmentLength:(id)arg1;
- (id)tlvData;

@end
