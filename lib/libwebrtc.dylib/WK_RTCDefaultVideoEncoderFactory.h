
@interface WK_RTCDefaultVideoEncoderFactory : NSObject <RTCVideoEncoderFactory> {
    bool  _supportsAv1;
    bool  _supportsH265;
    bool  _supportsVP9Profile0;
    bool  _supportsVP9Profile2;
    bool  _useLowLatencyH264;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)supportedCodecs;
+ (id)supportedCodecsWithH265:(bool)arg1 vp9Profile0:(bool)arg2 vp9Profile2:(bool)arg3 av1:(bool)arg4;

- (id)createEncoder:(id)arg1;
- (id)initWithH265:(bool)arg1 vp9Profile0:(bool)arg2 vp9Profile2:(bool)arg3 lowLatencyH264:(bool)arg4 av1:(bool)arg5;
- (id)supportedCodecs;

@end
