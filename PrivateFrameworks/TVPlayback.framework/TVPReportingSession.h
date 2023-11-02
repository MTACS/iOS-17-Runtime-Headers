
@interface TVPReportingSession : NSObject {
    NSObject<TVPMediaItem> * _mediaItem;
    RTCReporting * _reporter;
}

@property (nonatomic, retain) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic, retain) RTCReporting *reporter;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_sendEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (id)initWithMediaItem:(id)arg1;
- (id)mediaItem;
- (void)reportDownloadFinishedWithResult:(long long)arg1 error:(id)arg2;
- (id)reporter;
- (void)setMediaItem:(id)arg1;
- (void)setReporter:(id)arg1;

@end
