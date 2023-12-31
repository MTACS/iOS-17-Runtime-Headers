
@interface HMDSetupEndPointRead : HMDSetupEndPointWrite <NSSecureCoding> {
    NSNumber * _audioSSRC;
    unsigned long long  _responseStatus;
    NSNumber * _videoSSRC;
}

@property (nonatomic, readonly, copy) NSNumber *audioSSRC;
@property (nonatomic, readonly) unsigned long long responseStatus;
@property (nonatomic, readonly, copy) NSNumber *videoSSRC;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (bool)_parseFromTLVDataOnFailure;
- (bool)_parseFromTLVDataOnSuccess;
- (id)audioSSRC;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7;
- (unsigned long long)responseStatus;
- (id)tlvData;
- (id)videoSSRC;

@end
