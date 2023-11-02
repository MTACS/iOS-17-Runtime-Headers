
@interface HMCameraClipVideoHLSPlaylistGenerator : NSObject {
    NSMutableString * _hlsPlaylistString;
    NSURL * _url;
}

@property (readonly, copy) NSData *hlsPlaylist;
@property (readonly) NSMutableString *hlsPlaylistString;
@property (readonly, copy) NSURL *url;

+ (id)_hlsPlaylistEncryptionMethodNameForScheme:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addSegment:(id)arg1;
- (void)addSegments:(id)arg1;
- (void)finish;
- (id)hlsPlaylist;
- (id)hlsPlaylistString;
- (id)initWithClip:(id)arg1 url:(id)arg2;
- (id)url;

@end
