
@interface SFSSCacheItem : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _asbd;
    NSString * _key;
    NSArray * _rawAudio;
    NSString * _resourceKey;
    NSString * _text;
    NSString * _voiceKey;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSArray *rawAudio;
@property (nonatomic, readonly) NSString *resourceKey;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *voiceKey;

+ (id)generateCacheKey:(id)arg1 text:(id)arg2;

- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id)initWithText:(id)arg1 voiceName:(id)arg2 voiceKey:(id)arg3 resourceKey:(id)arg4 asbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg5 rawAudio:(id)arg6;
- (id)key;
- (id)rawAudio;
- (id)resourceKey;
- (id)text;
- (id)voiceKey;

@end
