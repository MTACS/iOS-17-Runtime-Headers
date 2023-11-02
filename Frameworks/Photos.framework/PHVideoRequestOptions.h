
@interface PHVideoRequestOptions : NSObject <NSCopying, PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions> {
    bool  _allowMediumHighQuality;
    long long  _contentMode;
    long long  _deliveryMode;
    long long  _downloadIntent;
    long long  _downloadPriority;
    bool  _includeTimeRangeMapper;
    bool  _liveRenderAndOnDemandRenderVideoConcurrently;
    bool  _liveRenderVideoIfNeeded;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    bool  _restrictToPlayableOnCurrentDevice;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
    bool  _streamingAllowed;
    long long  _streamingVideoIntent;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    long long  _version;
    bool  _videoComplementAllowed;
}

@property (getter=isMediumHighQualityAllowed, nonatomic) bool allowMediumHighQuality;
@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long deliveryMode;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeTimeRangeMapper;
@property (nonatomic) bool liveRenderAndOnDemandRenderVideoConcurrently;
@property (nonatomic) bool liveRenderVideoIfNeeded;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, readonly, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool restrictToPlayableOnCurrentDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (getter=isStreamingAllowed, nonatomic) bool streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic) long long version;
@property (getter=isVideoComplementAllowed, nonatomic) bool videoComplementAllowed;

- (void).cxx_destruct;
- (long long)contentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (id)description;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (bool)hasValidTimeRange;
- (bool)includeTimeRangeMapper;
- (id)init;
- (bool)isCurrentVersion;
- (bool)isMediumHighQualityAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (bool)isSynchronous;
- (bool)isVideoComplementAllowed;
- (bool)liveRenderAndOnDemandRenderVideoConcurrently;
- (bool)liveRenderVideoIfNeeded;
- (id /* block */)progressHandler;
- (id)renderResultHandlerQueue;
- (bool)restrictToPlayableOnCurrentDevice;
- (id)resultHandlerQueue;
- (void)setAllowMediumHighQuality:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setDownloadPriority:(long long)arg1;
- (void)setIncludeTimeRangeMapper:(bool)arg1;
- (void)setLiveRenderAndOnDemandRenderVideoConcurrently:(bool)arg1;
- (void)setLiveRenderVideoIfNeeded:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRestrictToPlayableOnCurrentDevice:(bool)arg1;
- (void)setResultHandlerQueue:(id)arg1;
- (void)setStreamingAllowed:(bool)arg1;
- (void)setStreamingVideoIntent:(long long)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVersion:(long long)arg1;
- (void)setVideoComplementAllowed:(bool)arg1;
- (long long)streamingVideoIntent;
- (struct CGSize { double x1; double x2; })targetSize;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)version;

@end
