
@interface PXGVideoPlayerViewConfiguration : NSObject <PXGViewUserData> {
    bool  _toneMapToStandardDynamicRange;
    PXVideoSession * _videoSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool toneMapToStandardDynamicRange;
@property (nonatomic, readonly) PXVideoSession *videoSession;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithVideoSession:(id)arg1 toneMapToStandardDynamicRange:(bool)arg2;
- (void)prepareForRender;
- (bool)toneMapToStandardDynamicRange;
- (id)videoSession;

@end
