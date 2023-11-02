
@interface HMDCameraRecordingMediaContainerConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    HMDCameraRecordingMediaContainer * _container;
    HMDCameraRecordingMediaContainerParameters * _parameters;
}

@property (nonatomic, readonly, copy) HMDCameraRecordingMediaContainer *container;
@property (nonatomic, readonly, copy) HMDCameraRecordingMediaContainerParameters *parameters;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)container;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaContainer:(id)arg1 containerParameters:(id)arg2;
- (id)parameters;
- (id)tlvData;

@end
