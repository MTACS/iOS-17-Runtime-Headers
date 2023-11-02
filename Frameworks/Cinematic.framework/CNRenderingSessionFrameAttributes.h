
@interface CNRenderingSessionFrameAttributes : NSObject <NSCopying, NSMutableCopying> {
    float  _fNumber;
    float  _focusDisparity;
    PTTimedRenderingMetadata * _internalMetadata;
}

@property float fNumber;
@property float focusDisparity;
@property (readonly) PTTimedRenderingMetadata *internalMetadata;
@property (readonly) long long majorVersion;
@property (readonly) long long minorVersion;
@property (readonly) float originalFNumber;
@property (readonly) float originalFocusDisparity;

- (void).cxx_destruct;
- (id)_initJustWithPTTimedRenderingMetadata:(id)arg1;
- (id)_initWithPTTimedRenderingMetadata:(id)arg1;
- (id)_initWithTimedData:(id)arg1 sessionAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)fNumber;
- (float)focusDisparity;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 sessionAttributes:(id)arg2;
- (id)initWithTimedMetadataGroup:(id)arg1 sessionAttributes:(id)arg2;
- (id)internalMetadata;
- (long long)majorVersion;
- (long long)minorVersion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)originalFNumber;
- (float)originalFocusDisparity;
- (void)setFNumber:(float)arg1;
- (void)setFocusDisparity:(float)arg1;

@end
