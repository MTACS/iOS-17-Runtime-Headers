
@interface AUPasscodeCodecCapability : NSObject {
    NSString * _algorithmName;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _numChannelRange;
    NSArray * _supportedSampleRates;
}

@property (nonatomic, readonly, copy) NSString *algorithmName;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } numChannelRange;
@property (nonatomic, readonly) NSArray *supportedSampleRates;

- (void).cxx_destruct;
- (id)algorithmName;
- (id)init;
- (id)initWithAlgorithmName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPasscodeCodecCapability:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })numChannelRange;
- (id)supportedSampleRates;

@end
