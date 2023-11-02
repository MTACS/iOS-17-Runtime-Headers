
@interface WK_RTCDefaultVideoDecoderFactory : NSObject <RTCVideoDecoderFactory> {
    bool  _supportsAv1;
    bool  _supportsH265;
    bool  _supportsVP9Profile0;
    bool  _supportsVP9Profile2;
    bool  _supportsVP9VTB;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createDecoder:(id)arg1;
- (id)initWithH265:(bool)arg1 vp9Profile0:(bool)arg2 vp9Profile2:(bool)arg3 vp9VTB:(bool)arg4 av1:(bool)arg5;
- (id)supportedCodecs;

@end
