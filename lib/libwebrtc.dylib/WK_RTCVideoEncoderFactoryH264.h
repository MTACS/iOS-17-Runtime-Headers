
@interface WK_RTCVideoEncoderFactoryH264 : NSObject <RTCVideoEncoderFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createEncoder:(id)arg1;
- (id)supportedCodecs;

@end
