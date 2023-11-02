
@interface WK_RTCVideoDecoderFactoryH264 : NSObject <RTCVideoDecoderFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createDecoder:(id)arg1;
- (id)supportedCodecs;

@end
