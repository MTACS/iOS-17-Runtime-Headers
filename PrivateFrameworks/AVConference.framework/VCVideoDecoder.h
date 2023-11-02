
@interface VCVideoDecoder : NSObject {
    int  _clientCount;
    long long  _streamToken;
    struct tagHANDLE { int x1; } * _videoPlayerHandle;
}

@property (readonly) struct tagHANDLE { int x1; }*videoPlayerHandle;

+ (id)decoderForStreamToken:(long long)arg1 withConfig:(struct tagVideoDecoderConfig { int x1; int x2; struct opaqueRTCReporting {} *x3; bool x4; bool x5; int (*x6)(); void *x7; }*)arg2;
+ (void)releaseVideoDecoderForStreamToken:(long long)arg1;
+ (id)streamTokenDecoderMap;

- (void)dealloc;
- (id)initWithConfig:(struct tagVideoDecoderConfig { int x1; int x2; struct opaqueRTCReporting {} *x3; bool x4; bool x5; int (*x6)(); void *x7; }*)arg1;
- (struct tagHANDLE { int x1; }*)videoPlayerHandle;

@end
