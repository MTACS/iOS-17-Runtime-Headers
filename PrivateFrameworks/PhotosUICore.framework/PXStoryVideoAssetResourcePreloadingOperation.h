
@interface PXStoryVideoAssetResourcePreloadingOperation : PXStoryDisplayAssetResourcePreloadingOperation <PXChangeObserver> {
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
    }  _downloadTimeRange;
    bool  _isExporting;
    PXVideoContentProvider * _videoContentProvider;
    PXVideoSessionManager * _videoSessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } downloadTimeRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExporting;
@property (readonly) Class superclass;
@property (retain) PXVideoContentProvider *videoContentProvider;
@property (nonatomic, readonly) PXVideoSessionManager *videoSessionManager;

- (void).cxx_destruct;
- (void)cancel;
- (id)diagnosticDescription;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })downloadTimeRange;
- (id)initWithDisplayAssetResource:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithVideoAssetResource:(id)arg1 mediaProvider:(id)arg2 downloadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 videoSessionManager:(id)arg4 isExporting:(bool)arg5;
- (bool)isExporting;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)px_start;
- (void)setVideoContentProvider:(id)arg1;
- (id)videoContentProvider;
- (id)videoSessionManager;

@end
