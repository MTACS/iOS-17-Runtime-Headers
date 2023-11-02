
@interface BWFastStereoDisparityConfiguration : BWInferenceConfiguration {
    long long  _disparityPrioritization;
    unsigned int  _disparityType;
    int  _fsdNetStereoImagesAlignment;
}

@property (nonatomic, readonly) long long disparityPrioritization;
@property (nonatomic, readonly) unsigned int disparityType;
@property (nonatomic, readonly) int fsdNetStereoImagesAlignment;

- (long long)disparityPrioritization;
- (unsigned int)disparityType;
- (int)fsdNetStereoImagesAlignment;
- (id)initWithInferenceType:(int)arg1 fsdNetStereoImagesAlignment:(int)arg2 disparityType:(unsigned int)arg3;

@end
