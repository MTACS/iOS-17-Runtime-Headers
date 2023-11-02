
@interface HMDemoCameraClip : HMCameraClip {
    NSURL * _clipURL;
}

@property (readonly, copy) NSURL *clipURL;

- (void).cxx_destruct;
- (id)clipURL;
- (id)initWithCameraProfile:(id)arg1 clipURL:(id)arg2 startDate:(id)arg3 duration:(double)arg4 significantEvents:(id)arg5;
- (id)initWithClipURL:(id)arg1 startDate:(id)arg2 duration:(double)arg3 significantEvents:(id)arg4;

@end
