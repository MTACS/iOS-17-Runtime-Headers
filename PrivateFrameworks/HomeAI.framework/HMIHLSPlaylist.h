
@interface HMIHLSPlaylist : HMFObject <HMFLogging> {
    NSMutableArray * _lines;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableArray *lines;
@property (readonly) NSString *playlistString;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)appendEncryptionModeWithPath:(id)arg1;
- (void)appendIFrameOnly;
- (void)appendInitializationSegmentWithPath:(id)arg1;
- (void)appendSeparableSegmentWithPath:(id)arg1 duration:(double)arg2;
- (void)appendSeparableSegmentWithPath:(id)arg1 duration:(double)arg2 byteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)end;
- (id)initWithPlaylistString:(id)arg1;
- (id)initWithTargetDuration:(double)arg1;
- (id)lines;
- (void)open;
- (id)playlistString;

@end
